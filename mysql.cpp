#include <iostream>
#include <mysql/mysql.h>

using namespace std;

int main() {
    MYSQL *conn;
    conn = mysql_init(NULL);

    // MySQL server connection details
    const char* host = "host";  // Your Windows IP
    const char* user = "user";         // Your MySQL username
    const char* password = "password";  // Your MySQL password
    const char* database = "dbName";  // Your database name

    if (conn == NULL) {
        cerr << "MySQL initialization failed!" << endl;
        return 1;
    }

    if (mysql_real_connect(conn, host, user, password, database, 3306, NULL, 0)) {
        cout << "Connected to MySQL successfully!" << endl;
        
        // Example query
        if (mysql_query(conn, "SHOW TABLES")) {
            cerr << "Query failed: " << mysql_error(conn) << endl;
        } else {
            MYSQL_RES *res = mysql_store_result(conn);
            MYSQL_ROW row;
            cout << "Tables in database:" << endl;
            while ((row = mysql_fetch_row(res))) {
                cout << row[0] << endl;
            }
            mysql_free_result(res);
        }

        mysql_close(conn);
    } else {
        cerr << "MySQL connection failed: " << mysql_error(conn) << endl;
    }

    return 0;
}

# C++ MySQL Connectivity  

This repository demonstrates MySQL connectivity in C++ and provides steps to set up and run the project.  

## Setup Instructions  

### Windows  
1. **Install WSL** (Windows Subsystem for Linux).  
2. **Initialize the WSL terminal** and ensure the project is inside the WSL directory.  
3. **Run the following commands:**  

### Linux  
No additional setup is required. Simply run the following commands:  

```bash
sudo apt update  
sudo apt install -y build-essential  
sudo apt install -y cmake  
sudo apt install -y gdb  
sudo apt install -y libmysqlclient-dev  
```  

### Database Configuration  
Navigate to the project directory and update the **`mysql.cpp`** file with your database configurations.  

## Compilation & Execution  

### Compile the Project  
From the root directory, run:  

```bash
g++ -o mysql_test mysql.cpp -lmysqlclient  
```  

- **`mysql_test`**: Specifies the name of the compiled file.  
- **`mysql.cpp`**: The source file.  
- **`-lmysqlclient`**: Links the MySQL client library.  

### Run the Program  
Execute the compiled file using:  

```bash
./mysql_test  
```  

---

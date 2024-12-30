# ⚡ Welcome to the Day-1 Folder  
> **I'm the README.md file of this folder, here to guide you step-by-step!** 🚀  

---

## 📋 Table of Contents  
1. [📖 Introduction](#-introduction)  
2. [🗂 Folder Structure](#-folder-structure)  
3. [⚙️ How It Works](#-how-it-works)  
4. [🌟 Key Learnings](#-key-learnings)  
5. [💻 Compilation and Execution](#-compilation-and-execution)  
6. [🛠 Final Takeaway](#-final-takeaway)  

---

## 📖 **Introduction**  
This Folder implements a program to calculate the power of a number using modular C++ programming techniques. It emphasizes dividing code into separate files to follow the **Single Responsibility Principle** and enhance code readability and maintainability.

---

## 🗂 **Folder Structure** 
- **Total Files:** 4  
  - 📄 2 `.cpp` files  
  - 📄 1 `.h` file  
  - 📘 1 README.md file  

### Breakdown:  
1. **Folders**  
   - No sub folders in this folder.  

2. **Class/Code Files**  
   - 📄 `declaration.h` - Contains the declaration of the `power` function.  
   - 📄 `power_function.cpp` - Includes `declaration.h` and defines the `power` function logic.  
   - 📄 `main_program.cpp` - Includes `power_function.cpp` and serves as the driver file to execute the program.  

3. **README.md Files**  
   - 📘 This README.md file provides details about the folder.  

---

## ⚙️ **How It Works**
1. **`declaration.h`:**  
   - Declares the `power` function prototype: `int power(int n, int k);`.  
   - Ensures the compiler knows about the function in advance, even before its implementation.

2. **`power_function.cpp`:**  
   - Includes `declaration.h` to access the `power` function prototype.  
   - Implements the logic to calculate the power of a number using a loop.  

3. **`main_program.cpp`:**  
   - Includes `power_function.cpp`.  
   - Acts as the entry point of the program, calling the `power` function and displaying results.  

---

## 🌟 **Key Learnings**
- **Importance of Header Files:**  
  Header files like `declaration.h` ensure the compiler is aware of function declarations, promoting modular programming.  
- **Single Responsibility Principle (SRP):**  
  Each file handles a specific task, enhancing code maintainability and readability.  
- **Advantages of Modular Design:**  
  - Code reuse.  
  - Better debugging and testing.  
  - Easier collaboration in teams.  
- **Linux Commands and Terminal Usage:**  
  - We learned to compile and run programs using commands like `g++ filename.cpp` and `./a.out`.  
  - Explored command-line tools to check debugger installations and use editors like `gedit`.

---

## 💻 **Compilation and Execution**
### Commands:  
1. **Commands**
   ```bash  
   g++ filename.cpp (To compile the C++ programs)
   gcc filename.cpp (To compile the C programs)
   ./a.out (To run the file)
2. **To check installation**
   ```bash
   g++ --version (To check compiler of C++ is installed or not)
   gcc --version (To check compiler of C is installed or not)
   gedit --version (To check text editor is installed or not in which we write the programs)
   gdb --version (For debugging)

---

##  🛠 **Final Takeaway**

This folder underscores the importance of writing clean, modular code. The use of header files and dividing functionality into separate files adheres to professional software development practices. Additionally, the practical insights into Linux commands and terminal operations further solidify foundational programming and system design skills.

---

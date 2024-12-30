# 🛒 Welcome to the Day-8 Folder!
> **I'm the README.md file of this folder, here to guide you step-by-step!** 🚀

---

## 📑 Table of Contents
- [📖 Introduction](#-introduction)
- [📂 Folder Structure](#-folder-structure)
- [🧠 Key Learning Outcomes](#-key-learning-outcomes)
- [🚀 Detailed Insights](#-detailed-insights)
- [🎯 Final Takeaway](#-final-takeaway)

---

## 📖 **Introduction**

Welcome to Day 8 of our learning journey! This folder demonstrates the powerful concept of **Exception Handling** in C++. Exception handling is a crucial feature in programming, allowing us to handle runtime errors and unexpected situations gracefully. This was my first time working with exception handling in C++, and I found it extremely insightful.

In this folder, I explored how to handle exceptions using object-oriented programming concepts, creating custom exception classes and handling runtime and logic errors effectively. This experience improved my ability to manage errors and understand how exceptions can enhance program stability and user experience.

---

## 📂 **Folder Structure**

This folder contains a total of **4 files**, including 3 C++ files and one README.md file:

- 📘 **ExceptionClass.cpp**: Defines custom exception classes, `Logic_Error` and `Runtime_Error`, which represent runtime and logical errors.
- 📗 **FunctionStart.cpp**: Implements the exception handling code by defining functions that illustrate the usage of exceptions in real scenarios, like division by zero or null pointer dereferencing.
- 📙 **MainProgram.cpp**: Contains the main function that runs the program and calls the functions from `FunctionStart.cpp` to demonstrate different types of exceptions.
- 📜 **README.md**: The file you are reading right now, which explains the folder's content and provides insights into the learning experience.

---

## 🧠 **Key Learning Outcomes**

### Exception Handling: A New Skill
- Exception handling allows us to:
  - Handle runtime errors, such as division by zero or null pointer dereferencing.
  - Define custom exceptions using classes.
  - Use built-in exceptions, such as `bad_alloc`, for memory allocation issues.
- This was my first experience with exception handling in C++, and it has improved my approach to writing more robust code by anticipating and managing errors.

### Challenges Faced
On Day 8, we encountered several challenges while implementing exception handling:
1. **Runtime Error Handling**: I successfully implemented a check for division by zero and null pointer dereferencing, demonstrating how to throw and catch `Runtime_Error` exceptions.
2. **Logic Error Handling**: I learned how to handle logical errors, like incorrect product calculations, using the `Logic_Error` exception class.
3. **Memory Allocation Handling**: I worked with built-in exception handling, like `bad_alloc`, to manage memory allocation failures.

### New Concepts Integrated
- How to create and use custom exception classes.
- How to throw and catch exceptions in a program.
- How to use built-in exceptions like `bad_alloc` for handling memory allocation errors.

---

## 🚀 **Detailed Insights**

### ExceptionClass.cpp
- Defines two custom exception classes:
  - `Logic_Error`: Represents a logical error, such as an incorrect product.
  - `Runtime_Error`: Represents runtime errors, such as division by zero or null pointer dereferencing.

### FunctionStart.cpp
- Implements exception handling logic by creating functions that:
  - Handle division by zero using `Runtime_Error`.
  - Handle null pointer dereferencing using `Runtime_Error`.
  - Check product correctness and throw a `Logic_Error` if incorrect.

### MainProgram.cpp
- The entry point of the program that:
  - Calls functions from `FunctionStart.cpp`.
  - Demonstrates handling of different types of exceptions using `try-catch` blocks.
  - Handles runtime and logic errors, as well as memory allocation errors with `bad_alloc`.

---

## 🎯 **Final Takeaway**

Day 8 was an enriching experience in learning exception handling in C++. By implementing custom exception classes and using built-in exceptions, I was able to handle errors more effectively. This concept is crucial for writing resilient programs that can manage unexpected conditions. Exception handling will definitely play a key role in future projects to ensure smooth and error-free user experiences.

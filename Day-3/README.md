# 📂 Welcome to Day-3 Folder: Exploring the Babylonian Algorithm!  
> **I'm the README.md file of this folder, here to guide you through the remarkable learnings of Day 3!** 🚀  

---

## 📋 Table of Contents  
1. [📖 Introduction](#-introduction)  
2. [📂 Folder Structure](#-folder-structure)  
3. [🌟 Key Features](#-key-features)  
4. [🧠 Learning Highlights](#-learning-highlights)  
5. [🛠 Final Takeaway](#-final-takeaway)  

---

## 📖 **Introduction**  
The Day-3 folder delves into the implementation of the **Babylonian Algorithm**, an efficient method to compute the square root of a given number without using built-in modules of C++. The focus was on understanding the algorithm's logic and developing an implementation from scratch.  

This day’s learning was guided by our college professors, who introduced the concept and helped us practically implement the algorithm through the provided programs:  
1. **BabylonianAlgorithm.cpp**  
2. **MainProgram.cpp**  

---

## 📂 **Folder Structure**  
- **Total Files:** 3
- **C++ file**: 2 
- **README.md File:** 1 (This file you're reading now)  

### Breakdown:  
1. **Files**  
   - 📄 `BabylonianAlgorithm.cpp`: Contains the definition of the Babylonian Algorithm function for calculating the square root of a number.  
   - 📄 `MainProgram.cpp`: Implements the Babylonian Algorithm efficiently by including `BabylonianAlgorithm.cpp`.  

2. **README.md File**  
   - 📘 Provides a detailed explanation of the folder's contents and learnings from Day 3.  

---

## 🌟 **Key Features**  
- **Babylonian Algorithm Implementation:**  
  - Developed an efficient algorithm to compute the square root of a number without using built-in modules.  

- **Modular Code Structure:**  
  - Organized code with a separate file for the algorithm definition and a main program to demonstrate its functionality.  

- **Handling Edge Cases:**  
  - Incorporated logic to compute square roots for both positive and negative numbers, handling imaginary roots when necessary.  

---

## 🧠 **Learning Highlights**  
1. **Babylonian Algorithm:**  
   - The algorithm iteratively calculates the square root of a number by improving approximations until a desired level of precision is achieved.  
   - It starts with two initial guesses `x` and `y` and refines them iteratively.  

   ### Babylonian Algorithm Definition:
   ```cpp
   double sqrt(double n){
       double x = 1;
       double y = n;
       if(x < y){
           while((y - x) >= 0.001){
               y = (y + x) / 2;
               x = n / y;
           }
       } else {
           while((x - y) >= 0.001){
               x = (x + y) / 2;
               y = n / x;
           }
       }
       return (x + y) / 2;
   }

---

## 🛠 **Final Takeaway**

Day 3 provided invaluable insights into creating efficient algorithms and tackling mathematical challenges in programming. Implementing the Babylonian Algorithm emphasized the importance of precision, modular code design, and edge case handling.

The concept of square root computation, as introduced by our professors, was deeply enriching and demonstrated how algorithms bridge theoretical mathematics with practical programming.

Explore the files in this folder to witness the elegance of the Babylonian Algorithm firsthand! 🌟

---
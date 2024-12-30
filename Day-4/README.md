# 📂 Welcome to Day 4: Exploring the TPK Algorithm!  
> **I'm the README.md file of this folder, here to guide you through the learnings of Day 4!** 🚀  

---

## 📋 Table of Contents  
1. [📖 Introduction](#-introduction)  
2. [📂 Folder Structure](#-folder-structure)  
3. [🌟 Key Features](#-key-features)  
4. [🧠 Learning Highlights](#-learning-highlights)  
5. [🛠 Final Takeaway](#-final-takeaway)  

---

## 📖 **Introduction**  
The Day 4 folder focuses on the **TPK Algorithm**, which encapsulates many essential functionalities found in programming languages. This algorithm showcases how fundamental features of programming languages were initially conceptualized and implemented by pioneers like **Donald Knuth ** and **Luis Trabb Pardo**.

The provided programs demonstrate the algorithm in both **C** and **C++**, with tasks assigned by our college professors to understand the core principles of language design and functionality implementation.  

---

## 📂 **Folder Structure**  
- **Total Files:** 3  
- **C file:** 1
- **C++ file:** 1
- **README.md File:** 1 (This file you're reading now)  

### Breakdown:  
1. **Files**  
   - 📄 `TPKAlgorithm.c`: Implements the TPK Algorithm in C.  
   - 📄 `TPKAlgorithm.cpp`: Implements the TPK Algorithm in C++.  

2. **README.md File**  
   - 📘 Provides a detailed explanation of the folder's contents and learnings from Day 4.  

---

## 🌟 **Key Features**  
- **TPK Algorithm Implementation:**  
  - Developed in both **C** and **C++** to demonstrate language features and implementation differences.  

- **Array Manipulation:**  
  - Reverse-ordering elements of an array.  
  - Applying a mathematical function to each element and filtering based on a predefined threshold.  

- **Mathematical Computation:**  
  - The function `f(x)` computes the result using the formula:  
    \[
    f(x) = \sqrt{|x|} + 5 \cdot x^3
    \]
  - The results are displayed for values that do not exceed the threshold of `400.0`.  

---

## 🧠 **Learning Highlights**  
1. **TPK Algorithm Details:**  
   - The algorithm processes an array of numbers by reversing their order and applying a specific mathematical function `f(x)` to each element.  

   - If the result of `f(x)` for an element exceeds `400.0`, it is flagged as exceeding the limit.  

2. **Algorithm Design:**  
   - Encapsulates essential computational steps, including:  
     - Array traversal.  
     - Conditional logic for thresholds.  
     - Mathematical computations involving absolute values, square roots, and powers.  

3. **Language-Specific Features:**  
   - **C Implementation:** Highlights procedural programming features.  
   - **C++ Implementation:** Demonstrates object-oriented capabilities and improved code readability with `iostream`.  

4. **Conceptual Understanding:**  
   - The TPK Algorithm symbolizes how early computer scientists designed algorithms to demonstrate programming language capabilities.  

   ### TPK Algorithm Definition (C++ Version):  
   ```cpp
   #include <iostream>
   #include <cmath>
   using namespace std;
   double f(double x){
       return (sqrt(abs(x)) + 5.0 * pow(x, 3.0));
   }
   int main(){
       cout << "Program is based on TPK Algorithm\n";
       double arr[11] = {7.9, 7.3, 20.9, 112.0, 5.0, 3.0, 2.9, 9.0, 21.7, 31.2, 4.1};
       int n = 11;
       for(int i = 0; i < n / 2; i++){
           double temp = arr[i];
           arr[i] = arr[n - i - 1];
           arr[n - i - 1] = temp;
       }
       cout << "Your array in reverse order looks like: {";
       for(int i = 0; i < n; i++){
           if(i < n - 1) cout << arr[i] << ",";
           else cout << arr[i] << "}";
       }
       cout << "\nApplying function on each element of array and displaying their result as per limit 400.0\n";
       for(int i = 0; i < n; i++){
           if(f(arr[i]) <= 400.0){
               cout << f(arr[i]) << endl;
           } else {
               cout << "Value exceeded than 400.0 for " << arr[i] << endl;
           }
       }
       return 0;
   }

---

## 🛠 **Final Takeaway**

Day 4 provided a glimpse into the foundational aspects of programming language development through the TPK Algorithm.

Implementing this algorithm emphasized the importance of:

- Mathematical precision.
- Array manipulation.
- Conditional logic.
- This day’s learning showcased how early programming concepts continue to influence modern-day computational    thinking.

- Explore the folder to understand the elegance of the TPK Algorithm and its implementation! 🌟

---
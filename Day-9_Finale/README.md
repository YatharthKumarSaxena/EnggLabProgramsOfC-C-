# 🛒 Welcome to the Day-9_Finale Folder!
> **This folder is special as it contains the final program for our end-semester exam!** 🚀

---

## 📖 Table of Contents
- [📖 Introduction](#-introduction)
- [📖 Folder Structure](#-folder-structure)
- [🎯 Final Takeaway](#-final-takeaway)

---

## 📖 **Introduction**
In this folder, you’ll find a solution to **Leetcode 232**, which requires implementing a **queue using stacks**. The problem involves using **two stacks** to simulate the operations of a queue, and the goal is to create a working program where users can **enqueue** and **dequeue** elements via a simple user interface.

### Why is this problem unique?
The twist lies in the fact that the problem doesn't specify that you need **two stacks**. If you're unfamiliar with this concept, trying to implement the queue with just **one stack** will be impossible. The solution requires:
1. Using **two stacks** to implement the queue.
2. Ensuring **enqueue** is done in **O(1)** and **dequeue** in **O(n)** or **enqueue** is done in **O(n)** and **dequeue** in **O(1)** 

### Solution Chosen By Me:
- **Enqueue**: **O(1)** (constant time)
- **Dequeue**: **O(n)** (linear time) for the simpler approach

This folder holds the final program for our end-semester exam, and it's the **Day 9 Finale**. The previous eight folders were part of the internal assessments, but this one is different. This folder contains the most important concept — a **Leetcode 232** problem: **Implement Queue Using Stacks**.

### Why is this folder different from the others?
This program is special because in a college exam, no one expects to face a **Leetcode question** (specifically **Leetcode 232**). The problem statement is to implement a **queue using stacks**, which was a surprise because it doesn’t specify the use of **two stacks**. If you are unfamiliar with the concept, implementing a queue using **one stack** is impossible, so you must use **two stacks**.

### The Problem Statement:
The task requires:
1. **User-defined class** for stack with **push**, **pop**, and any other necessary functions.
2. Implement a **queue** using two stacks.
3. The problem had to be solved in a strict **1.5-hour time span**.
4. Additionally, you need to create a **user interface** to interact with the queue operations (enqueue and dequeue).

### Time Complexity:
- The solution involves two methods to implement the operations:
  1. The **enqueue** operation is **O(1)**, and the **dequeue** operation is **O(n)**.
  2. The **enqueue** operation is **O(n)**, while the **dequeue** operation takes **O(1)**.

### Key Concepts Learned:
This program imparts the combination of several essential concepts:
- **Object-Oriented Programming** (OOP)
- **Data Structures** (Stacks and Queues)
- **Algorithms** (Efficient operations for enqueue and dequeue)
- **User Interface Design**

---

## 📖 **Folder Structure**
### Total Files in the Folder: 6

Here’s the breakdown:

1. 📂 **stack.cpp**  
   - **Purpose**: Contains the **stack class** with member functions for **push**, **pop**, and **isEmpty**. It sets up the data structure used to implement the queue.

2. 📂 **queue.cpp**  
   - **Purpose**: Implements the **queue class** using two stacks. Contains functions for **Enqueue**, **Dequeue**, and **display**.

3. 📂 **functionsOfStack.cpp**  
   - **Purpose**: Implements the member function definitions for the **stack class** that are declared in **stack.cpp**.

4. 📂 **functionsOfQueue.cpp**  
   - **Purpose**: Provides the function definitions for the **queue class**, specifically for the **Dequeue** operation and any other queue-related logic.

5. 📂 **mainProgram.cpp**  
   - **Purpose**: Ties everything together. Provides a simple user interface to interact with the queue operations.

6. 📂 **README.md**  
   - **Purpose**: Explains the folder structure, code implementation, and how to run the program.

---

## 📖 **File Dependencies**
- **stack.cpp**: Defines the **stack class** and its member functions. Included by **functionsOfStack.cpp**.
- **functionsOfStack.cpp**: Contains the function definitions for the **stack class**, included by **stack.cpp**.
- **queue.cpp**: Defines the **queue class** and its functions for **Enqueue**, **Dequeue**, and **display**. It includes **functionsOfStack.cpp** for stack operations.
- **functionsOfQueue.cpp**: Provides function definitions for queue operations. It includes **queue.cpp** for the main queue logic.
- **mainProgram.cpp**: Ties everything together and interacts with the user. It includes **functionsOfQueue.cpp** to utilize the queue operations.

## 🎯 **Final Takeaway**
This project combines various key concepts:
- **Object-Oriented Programming**: The classes and functions follow the OOP paradigm.
- **Data Structures**: Efficient use of **stacks** and **queues**.
- **Algorithms**: The solution demonstrates the algorithm for **queue implementation using two stacks**.
- **User Interface**: The program includes a simple yet effective UI for interacting with the queue.

This project has significantly enhanced my understanding of data structures, algorithms, and user interface development, ensuring I can efficiently implement solutions to complex problems.

---
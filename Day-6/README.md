# 🛠️ Welcome to the Day-6 Folder!
> **I'm the README.md file of this folder, here to guide you step-by-step!** 🚀

---

## 📑 Table of Contents
- [📖 Introduction](#-introduction)
- [📂 Folder Structure](#-folder-structure)
- [💡 Key Concepts](#-key-concepts)
- [📜 Final Takeaway](#-final-takeaway)

---

## 📖 **Introduction**
Welcome to the **Day-6** folder! This folder delves into fundamental Object-Oriented Programming concepts, including the **Diamond Problem** and **Runtime Polymorphism**. Through this, you'll gain a deeper understanding of how to handle ambiguity in multiple inheritance and leverage the virtual keyword for runtime binding. 🌟

---

## 📂 **Folder Structure**
This folder consists of **3 files** in total:
- 📂 **2 C++ files**:
  - `Ambiguity.cpp` 📝 - Demonstrates the **Diamond Problem** and provides two solutions:
    1. Using a **virtual base class**. Here this Solution is not Applicable as the definition of function should be same and the two base class must inherit this function from another base class. The function definition should be present in the base class itself . That is called Diamond Problem.
    2. Using the **scope resolution operator**.
  - `Virtual.cpp` 📝 - Explains **Runtime Polymorphism**, emphasizing that runtime polymorphism cannot be achieved without the `virtual` keyword.
- 📜 **README.md** - The file you’re reading now, providing an overview of the folder.

Each file is designed to enhance your understanding of core programming concepts. 🚀

---

## 💡 **Key Concepts**
1. **Diamond Problem**:
   - Occurs in **multiple inheritance** when two base classes have a method with the same name, causing ambiguity in the derived class.
   - **Solutions**:
     - **Virtual Base Class**: Ensures only one instance of the shared base class exists.
     - **Scope Resolution Operator**: Explicitly specifies which base class method to invoke.

2. **Runtime Polymorphism**:
   - Achieved through **virtual functions**.
   - Demonstrates how late binding enables dynamic method overriding at runtime.
   - **Example**:
     - `virtual.cpp` uses hierarchical inheritance and an array of base pointers to showcase polymorphism.

---

## 🛠 **Final Takeaway**

This folder solidified my understanding of:

1. Tackling ambiguity in multiple inheritance scenarios.
2. Utilizing the virtual keyword for achieving runtime polymorphism.
3. The elegance of late binding and its impact on flexibility in object-oriented design.
4. These concepts are foundational for building robust and scalable C++ applications. I hope you enjoy exploring this as much as I did while creating it! 🚀


---
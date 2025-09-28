# Recursion in C++

This folder contains C++ programs that demonstrate the fundamental concepts of recursion.

---

## 📌 What is Recursion?

Recursion is a process where a function calls itself to solve a problem.

Every recursive function has two parts:

1. **Base Case** → stopping condition to prevent infinite recursion.
2. **Recursive Case** → the function calls itself with a smaller/simpler input.

---

## 📘 Concepts Covered

### 1️⃣ Printing Numbers

- Recursion can replace loops to print numbers (forward and backward).
- Example: printing 1 → N normally, or using **backtracking** to print while returning.

---

### 2️⃣ Backtracking

- Backtracking means doing work **after the recursive call**, while the stack is **unwinding**.
- Useful in problems like printing in reverse, generating subsets, N-Queens, etc.

---

### 3️⃣ Parameterized vs Functional Recursion

- **Parameterized Recursion** → carry result as a function parameter (e.g., passing sum so far).
- **Functional Recursion** → return result from each call and combine (e.g., returning sum of numbers).

---

### 4️⃣ Array Operations with Recursion

- Reversing an array using two pointers.
- Traversing elements one by one using recursion.

---

### 5️⃣ Palindrome Check

- Recursively compare characters from start and end.
- Time Complexity: **O(n)**
- Space Complexity: **O(n)** (stack usage).

---

6️⃣ Multiple Recursive Calls

Some problems require a function to call itself multiple times within the same call.

- Example: Fibonacci sequence
  - Each fib(n) calls both fib(n-1) and fib(n-2).
  - Time Complexity: O(2^n)
  - Space Complexity: O(n) (due to recursion depth).

This shows how recursion trees expand exponentially in such problems.

---

⚡ Key Points to Remember

- Always define a base case.
- Recursive solutions may use extra stack space.
- Avoid recursion for simple linear tasks (loops are more efficient).

---

This README gives the **theory** while the folder contains the **C++ code examples**.

---

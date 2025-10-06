# 📘 Hashing - Quick Notes

## 🔹 What is Hashing?

Hashing is a technique used to **map data (keys)** to a fixed-size table (hash table) using a **hash function**.

Basically hashing is storing(pre-compute) and fetching.

- Purpose: Efficient searching, insertion, and deletion.
- Goal: Achieve average **O(1)** time complexity for lookups.

---

## 🔹 Number Hashing using Array

We can use an array to store the frequency of numbers directly.

Example:

```cpp
int arr[1000] = {0}; // for numbers in range [0,999]
arr[num]++;          // increment frequency
```

### ⚠️ Limitations

- Wastes memory if the number range is huge (e.g., 10^9).
- Cannot handle negative numbers directly.
- Limited to the fixed size of the array.

**Time Complexity:**

- Insert: `O(1)`
- Search: `O(1)`

---

## 🔹 Character Hashing using Array

Characters can be hashed directly by converting them into integer indices.

### Formula for Index:

- For lowercase letters:
  `index = ch - 'a'` (range 0–25)
- For uppercase letters:
  `index = ch - 'A'` (range 0–25)
- For all ASCII characters:
  Declare `int arr[256]`, then simply use `arr[ch]`.

Example:

```cpp
int freq[256] = {0};
char c = 'B';
freq[c]++; // directly increments index 66
```

---

## 🔹 Overcoming Number Hashing Problem When Using Array

Maximum size of array 10^6 can be used in main function and 10^7 if used globally. To overcome these problems, we use map/unordered_map:

- Stores in key-value pair.
- Works for very large ranges.
- Handles negative numbers too.
- Memory efficient.

---

## 🔹 Map vs Unordered_Map

### **Map**

- Implemented as a **Red-Black Tree (BST)**.
- Keys must be **comparable (`<`)**.
- Built-in supported:

  - Integers (int, long, etc.), floating types, char, bool
  - std::string, pointers
  - std::pair, std::tuple (lexicographical < defined)

- **Time Complexity**:

  - Insert: `O(log N)`
  - Search: `O(log N)`
  - Delete: `O(log N)`

- Keys are stored in **sorted order**.

### **Unordered Map**

- Implemented as a **Hash Table**.
- Keys must be **hashable**.
- Built-in supported:

  - Integers, floating types, char, bool
  - std::string, pointers

- Not supported directly: pair, tuple, structs → need custom hash function.

- **Time Complexity (Average)**:

  - Insert: `O(1)`
  - Search: `O(1)`
  - Delete: `O(1)`

- Worst case: `O(N)` (if too many collisions occur).
- Keys are stored in **no particular order**.

---

## 🔹 Key Type Limitations

### map

- Keys must be **comparable using `<`**.
- ✅ Supports: int, char, string, pair, tuple.
- ⚠️ For custom struct/class → need to define `operator<`.

### unordered_map

- Keys must be **hashable**.
- ✅ Supports: int, char, bool, string, pointers.
- ❌ Does not directly support pair, tuple, struct/class → need **custom hash function**.
- ⚠️ Float/double possible but risky due to precision issues.

---

## 🔹 Worst Case in Unordered_Map

- Occurs when **many keys hash to the same index** (collisions).
- Then all elements in a bucket are stored in a linked list / tree.
- Operations degrade to **O(N)**.

### Causes:

1. Poor hash function (produces same hash for many keys).
2. Large number of elements without rehashing.
3. Bad choice of table size (not prime, power of 2, etc.).

---

## 🔹 Hashing Methods

1. **Division Method**
   `h(k) = k mod m`

   - Simple and fast.
   - Best if `m` is prime.

2. **Folding Method**

   - Break key into parts, add them, take mod.

3. **Mid Square Method**

   - Square the key, extract middle digits as hash.

---

## 🔹 Division Method (Explained)

Formula:
[
h(k) = k \mod m
]

Example:

- Table size m = 10
- Keys = {22, 43, 54, 32}

Hash values:

- h(22) = 22 mod 10 = 2
- h(43) = 43 mod 10 = 3
- h(54) = 54 mod 10 = 4
- h(32) = 32 mod 10 = 2 → **Collision with 22**

---

## 🔹 Collision

When two different keys map to the same index.

Example:

- Key 22 → index 2
- Key 32 → index 2

Both map to same slot → **collision**.

---

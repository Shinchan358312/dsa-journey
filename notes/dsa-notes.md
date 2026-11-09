1.slove Dsa problem the problem is sort 0's and 1's slove with 2 methods;
## Method1=> count the no of zeros and ones then fill the zeros and then ones.
## Method2=>in pass way using two pointer method in which we point the  pointer a at first of array and b is in last , then decrease the a pointer b when a==1&& b==1 the condition and else is a++ while using while loop a<b r

## what's error i'm facing while solving this question is in method1 i do not initalize the couting varibales zeros and oness with 0 and in method2 swaping the pointer value not array value 
## improve versions is =>
# DSA Notes: Sort 0s and 1s

## Problem Statement
Given an array containing only 0s and 1s, sort the array in ascending order (all 0s followed by all 1s).

---

## Approaches

### Method 1: Two-Pass (Counting)
1. Traverse the array and count the total number of `0`s and `1`s.
2. Overwrite the array: fill indices from `0` to `count0 - 1` with `0`, then fill the remainder with `1`.
- **Time Complexity:** O(2N) ≈ O(N)
- **Space Complexity:** O(1)

### Method 2: One-Pass (Two Pointers)
1. Initialize two pointers: `a = 0` (start) and `b = n - 1` (end).
2. While `a < b`:
   - If `arr[a] == 0`: increment `a++`.
   - If `arr[b] == 1`: decrement `b--`.
   - If `arr[a] == 1` and `arr[b] == 0`: swap `arr[a]` and `arr[b]`, then do `a++` and `b--`.
- **Time Complexity:** O(N)
- **Space Complexity:** O(1)

---

## Errors Faced & Key Lessons
1. **Uninitialized Counters:** Failed to initialize counting variables with `0` in Method 1 (`int count0 = 0, count1 = 0;`), which caused garbage value errors.
2. **Index vs. Value Swapping:** Swapped the index variables (`swap(a, b)`) instead of the actual array elements (`swap(arr[a], arr[b])`).

### Solving leetcode question 75 =>
## 1.learn two pointers and one pass way and two pass way method i learn in toady lesson.
## learn about three pointers or dutch flag algorithum in this we have low, mid and high we have to play with mid and with the help of the mid we push the 0's to the mid left side and 2's right side 

### Errors=>
## it takes me time 1.30 hour with improper sloution and after that see the solution the only thing we the mid variable 

#### Improve grammer version 
### LeetCode 75: Sort Colors (Dutch National Flag Algorithm)

#### Key Learnings
* **Two-Pass Approach vs. One-Pass Approach:**
  * Two-pass: Count occurrences of 0s, 1s, and 2s, then overwrite the array (O(2N) time, O(1) space).
  * One-pass: Use three pointers (`low`, `mid`, `high`) to partition the array in a single traversal (O(N) time, O(1) space).
* **Pointer Roles & Invariants:**
  * `[0 ... low - 1]`: Region containing strictly `0`s.
  * `[low ... mid - 1]`: Region containing strictly `1`s.
  * `[mid ... high]`: Unexplored section currently being scanned.
  * `[high + 1 ... n - 1]`: Region containing strictly `2`s.
* **Transition Logic:**
  * If `nums[mid] === 0`: `swap(nums[low], nums[mid])`, then `low++`, `mid++`.
  * If `nums[mid] === 1`: `mid++`.
  * If `nums[mid] === 2`: `swap(nums[mid], nums[high])`, then `high--`. *(Do NOT increment `mid` here because the swapped element from `high` is uninspected!)*

#### Mistakes & Post-Mortem
* Spent 1.5 hours attempting an incorrect midpoint calculation (`j = n/2 + 1`) based on array length rather than using pointer-based partition regions.
* **Lesson Learned:** The Dutch National Flag algorithm partitions by **value**, not by array size. `mid` acts as the active scanner, and both `low` and `mid` must start at index `0`.

---


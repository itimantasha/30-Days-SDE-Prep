# **C Programming Revision Cheat Sheet**

#### **1. Core Language Features**
*   **Nature:** C is a **middle-level, procedural language** that is faster than Java or Python.
*   **Data Types:** 
    *   **Basic:** `int`, `char`, `float`, `double`.
    *   **Derived:** Arrays and Pointers.
    *   **User-defined:** `struct`, `union`, `enum`.
*   **Memory Tool:** Use the **`sizeof` operator** to find the exact size of a variable in bytes.
*   **Scope:** **Static functions** are restricted to the file or function where they are declared.

#### **2. Memory Management (Heap)**
*   **Header:** Always include **`<stdlib.h>`** for dynamic allocation.
*   **`malloc`:** Allocates one continuous memory block; the pointer holds the address of the first element.
*   **`calloc`:** Allocates **multiple blocks**, takes two arguments (number of elements and size), and initializes all values to **zero**.
*   **`realloc`:** Changes the size of previously allocated memory without data loss.
*   **`free`:** Deallocates memory; essential to prevent **memory leaks** (memory held but not used).

#### **3. Pointers & Parameters**
*   **Pointer:** A variable storing the **memory address** of another variable.
*   **Dangling Pointer:** A pointer that still points to a memory location after the original variable is deleted.
*   **Call by Value:** Passes a copy; changes do not affect the original variable.
*   **Call by Reference:** Passes the **address**; changes inside the function affect the original variable.

#### **4. Arrays & Strings**
*   **Arrays:** Homogeneous collections stored in **consecutive memory**.
*   **Strings:** Character arrays terminated by a **null character (`\0`)**.
*   **Library Functions:** 
    *   `strlen`: Counts characters until `\0`.
    *   `strcpy`: Copies one string to another.
    *   `strcmp`: Compares two strings.
    *   `strcat`: Concatenates (adds) two strings.

#### **5. Essential Logic Snippets**
*   **Swap (No 3rd Variable):** `x = x + y; y = x - y; x = x - y;`.
*   **Check Equality (No `==`):** Use bitwise XOR: `if (!(x ^ y))` returns true if equal.
*   **Recursion:** A function calling itself (e.g., Factorial: `n * fact(n - 1)`).
*   **Fibonacci:** Next term is the sum of previous two: `N3 = N1 + N2`.
*   **Quick Sort:** Efficiently sorts arrays by picking a **pivot** and partitioning elements.
*   **Binary Search:** Finds elements in sorted arrays by repeatedly dividing the search interval in half.

# Two Sum with Hash Table

## Overview

This C program showcases a solution to the "Two Sum" problem using a hash table data structure. The Two Sum problem involves finding two numbers in an array that add up to a specified target value. If such a pair exists, this program returns their indices. The code demonstrates an efficient algorithm with a hash table for solving this problem.

## How it Works

1. **Hash Function**: The program defines a hash function that computes the modulo of an integer with a predefined constant (`TABLE_SIZE`) to determine a hash index.

2. **Data Structure**: It employs a hash table implemented as an array of `Entry` structures. Each `Entry` consists of an integer value (`key`) and the index (`index`) of that value in the input array.

3. **Main Algorithm**:
   - The code iterates through the input array, for each element calculating its complement (the difference between the target and the current element).
   - It computes the hash index for the complement using the hash function.
   - If an entry already exists in the hash table at the calculated index, this indicates a pair has been found. The program creates a result array, stores the indices of the two numbers in the result array, and returns it.
   - If no entry exists at the calculated index, it creates an `Entry` for the current element, stores it in the hash table at the calculated index, and continues to the next element.

4. **Result**:
   - If a valid pair is found, the program returns an integer array with the indices of the two numbers.
   - If no pair is found, it returns `NULL`.

5. **Memory Management**: Proper memory allocation and deallocation are ensured. Memory is allocated for the result array and any dynamically created `Entry` structures, and it is freed when it's no longer needed.

## Example

Suppose you have the following input:
  int nums[] = {2, 7, 11, 15, 30, 473, 70};
  int target = 475;

Running the program with this input would yield the result:
  Target: 475
  Index created, Key: 2 || Value: 0
  Index created, Key: 7 || Value: 1
  Index created, Key: 11 || Value: 2
  Index created, Key: 15 || Value: 3
  Index created, Key: 30 || Value: 4
  Index created, Key: 473 || Value: 5
  Index created, Key: 70 || Value: 6
  Result #1: 5
  Result #2: 6




# LeetCode Solutions — C & C++

This repo contains my **LeetCode** solutions in **C** and **C++**s.

## Requirements
- **Compilers**
  - C: `gcc` or `clang` (C17 or C11)
  - C++: `g++` or `clang++` (C++17 or newer)

## Naming Convention
- `####-kebab-title.c` for C, `####-kebab-title.cpp` for C++ (#### = LeetCode problem number).
- Match LeetCode function signatures exactly.
  - C example: `int* twoSum(int* nums, int numsSize, int target, int* returnSize);`
  - C++ example (typical): `vector<int> twoSum(vector<int>& nums, int target);`

## Build & Run (Make)
From repo root:

```bash
# Build all C and C++ solutions (and simple tests if present)
make all

# Build only C or only C++
make c
make cpp

# Build specific problem
make c-0001-two-sum
make cpp-0001-two-sum

# Run a test binary (path printed by make)
./build/c/0001-two-sum_test
./build/cpp/0001-two-sum_test

# Clean

## Progress
|----|--------------------------------------|----------|------------|-
| #  | Title                                | Language | Difficulty |
|----|--------------------------------------|----------|------------|
|0001| Two Sum                              | C        | Easy       |
|0002| Add Two Numbers                      | C        | Medium     |
|0004| Median Of Two Sorted Arrays          | C        | Hard       |
|0007| Reverse Integer                      | C        | Medium     |
|0009| Palindrome Number                    | C        | Easy       |
|0013| Roman To Integer                     | C        | Easy       |
|0019| Remove Nth Node From End of List     | C        | Medium     |
|0024| Swap Nodes In Pairs                  | C        | Medium     |
|0026| Remove Duplicates From Sorted Array  | C        | Easy       |
|0027| Remove Element                       | C        | Easy       |
|0083| Remove Duplicate From Sorted List    | C        | Easy       |
|0088| Merge Sorted Array                   | C        | Easy       |
|0203| Remove Linked List Elements          | C        | Easy       |
|2253| Add Two Integers                     | C        | Easy       |
|----|--------------------------------------|----------|------------|


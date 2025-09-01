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

| # | Title              |  Solutions                                    | Language   | Difficulty |
|---|--------------------|-----------------------------------------------|------------|------------|
| 1 | Two Sum            | [/1-Two-Sum.c](/1-Two-Sum.c)                  | C          | Easy       |
| 2 | Add Two Numbers    | [/2-Add-Two-Numbers.c](/2-Add-Two-Numbers.c)  | C          | Medium     |
| 7 | Reverse Integer    | [/7-Reverse-Integer.c](/7-Reverse-Integer.c)  | C          | Medium     |

make clean


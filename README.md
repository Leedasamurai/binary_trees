# Binary Tree Project

This project involves the implementation of functions related to binary trees in C. The code follows specific requirements, including style guidelines, file organization, and the use of defined data structures.

## Table of Contents

- [General Info](#general-info)
- [Requirements](#requirements)
- [Project Structure](#project-structure)
- [How to Use](#how-to-use)
- [Code Example](#code-example)
- [Author](#author)
- [Acknowledgments](#acknowledgments)

## General Info

This project focuses on the implementation of various functions for binary trees. It covers basic binary trees, Binary Search Trees (BSTs), AVL Trees, and Max Binary Heaps. The code adheres to specific style guidelines, including the Betty style, and follows precise compilation and testing instructions.

## Requirements

- **Editors:** Allowed editors are vi, vim, and emacs.
- **Compilation:** Code will be compiled on Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89.
- **Coding Style:** Code should follow the Betty style and will be checked using betty-style.pl and betty-doc.pl.
- **Functions Limit:** No more than 5 functions per file.
- **Header File:** Prototypes of all functions should be included in a header file named `binary_trees.h`.

## Project Structure

- **binary_trees.h:** Header file containing function prototypes and necessary data structures.
- **[other source files]:** Files containing the implementation of specific functions, adhering to the requirements.

## How to Use

To use this project, follow these steps:

1. Clone the repository to your local machine.
2. Compile the code using the provided compilation instructions.
3. Implement your test cases or use the provided `main.c` files.
4. Run the executable to test the functionality of the implemented functions.

## Code Example

Here's an example of how to use a binary tree and one of the provided functions:

```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root = binary_tree_node(NULL, 98);
    binary_tree_t *left = binary_tree_insert_left(root, 12);
    binary_tree_t *right = binary_tree_insert_right(root, 402);

    /* Your code using tree functions goes here */

    return 0;
}

## Author

- Lesego Phuku <lesegoleemac@gmail.com>

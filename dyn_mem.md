# Exercise: Dynamic Memory Allocation for an Array

In this C++ exercise, you will write a program that dynamically allocates memory for an integer array based on user input. The program should prompt the user to enter the size of the array, allocate memory dynamically, and then calculate the sum of the array elements.

## Program Outline

Here's a step-by-step outline of the program:

1. In the `main` function, prompt the user to enter the size of the array.
2. Dynamically allocate memory for an integer array of the specified size using `new` or `malloc`.
3. Ask the user to input values for each element of the array.
4. Calculate the sum of all the elements in the dynamically allocated array.
5. Display the sum.
6. Deallocate the dynamically allocated memory to prevent memory leaks.

## Code Template

Here's a template to help you get started:

```cpp
#include <iostream>

int main()
{
    int size;

    // Input: Prompt the user to enter the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate memory for the integer array

    // Input: Ask the user to input values for each element of the array

    // Calculate the sum of the elements in the dynamically allocated array

    // Output: Display the sum of the elements

    // Deallocate the dynamically allocated memory

    return 0;
}

# Exercise: Find the Maximum Value in an Array

In this C++ exercise, you will write a program that finds and displays the maximum value in an array of integers using pointers. You will implement a function named `findMax` that takes an array and its size as parameters and returns a pointer to the maximum value.

## Program Outline

Here's a step-by-step outline of the program:

1. Declare an integer array, e.g., `int numbers[]`, and initialize it with a set of integer values.
2. Declare a function named `findMax` that takes two parameters: an integer array and its size. This function should return a pointer to the maximum value in the array.
3. In the `main` function, call the `findMax` function to get a pointer to the maximum value in the array.
4. Display the maximum value and its index in the array.

## Code Template

Here's a template to help you get started:

```cpp
#include <iostream>

int* findMax(int array[], int size);

int main()
{
    int numbers[] = {10, 24, 6, 45, 32, 50, 8, 19}; // Initialize with your own values
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Call the findMax function to get a pointer to the maximum value

    // Display the maximum value and its index in the array

    return 0;
}

// Function to find the maximum value in an array and return a pointer to it
int* findMax(int array[], int size)
{
    // Implement the logic to find and return a pointer to the maximum value
}

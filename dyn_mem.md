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
```

## Optional:

### Resizing

1. **User Choice to Grow the Array:**
   - Ask the user if they want to grow the array.

2. **Resizing the Array:**
   - If the user chooses to resize the array, prompt them to enter the new size of the array and perform the resizing, copying the existing elements to the new array.

3. **Display the Sum of the Resized Array:**
   - Display the sum of the elements in the resized array.

4. **Deallocate Memory:**
   - Deallocate the dynamically allocated memory for both the initial and resized arrays.

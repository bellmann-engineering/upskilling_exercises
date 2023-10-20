# Exercise: Swap Two Integers Using Pointers

In this C++ exercise, you will write a program that allows the user to input two integer values and then swaps their values using pointers. You should implement a function called `swapIntegers` that takes two integer pointers as arguments and swaps the values pointed to by these pointers.

Here's a basic outline of the program:

1. Declare two integer variables, `num1` and `num2`.
2. Declare two integer pointers, `ptr1` and `ptr2`, and make them point to the addresses of `num1` and `num2`, respectively.
3. Implement a function `swapIntegers` that takes two integer pointers as parameters and swaps the values they point to.
4. In the `main` function, prompt the user to input two integers.
5. Call the `swapIntegers` function to swap the values of `num1` and `num2` using pointers.
6. Display the swapped values of `num1` and `num2.

Your program should output the swapped values of the two integers.

Here's a template to help you get started:

```cpp
#include <iostream>

void swapIntegers(int* ptr1, int* ptr2);

int main()
{
    int num1, num2;
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    // Input: Prompt the user to enter two integers

    // Call the swapIntegers function to swap the values

    // Output: Display the swapped values

    return 0;
}

// Function to swap two integers using pointers
void swapIntegers(int* ptr1, int* ptr2)
{
    // Implement the swapping logic here
}

 ```

## Optional:
What changes if we change the function to
`void swapIntegers(int& ptr1, int& ptr2)` ... ?

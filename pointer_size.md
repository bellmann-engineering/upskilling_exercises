Exercise: Pointer Size Demonstration

In this exercise, you will work with pointers of different data types (int*, char*, float*, double*) and use the sizeof operator to determine the size of these pointers.

    Declare and initialize the following variables of different data types:
        An integer variable (int) with an initial value.
        A character variable (char) with an initial value.
        A floating-point variable (float) with an initial value.
        A double-precision variable (double) with an initial value.

    Declare pointers for each of the above data types. For example, declare an int* to store the address of the integer variable, a char* for the character variable, and so on.

    Store the addresses of the corresponding variables in the respective pointers. Use the address-of operator & to obtain the address of a variable and assign it to the pointer.

    Use the sizeof operator to determine the size (in bytes) of each of the pointers.

    Display the size of each pointer using printf or a similar method.

Your goal is to understand how the size of a pointer varies depending on the data type it points to. Note that the size of pointers may vary based on the platform and compiler you are using, but typically, on most modern systems, they are 4 bytes on a 32-bit system and 8 bytes on a 64-bit system.

Feel free to write a C or C++ program to complete this exercise and observe the differences in pointer sizes.

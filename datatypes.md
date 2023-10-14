# C++ Data Type Size Exercise

In this exercise, we will use the C++ `sizeof` operator and the `limits.h` header to determine the sizes of common data types on your operating system. You will also learn how to print the size of each data type in bytes.

## Instructions

1. Create a C++ program that includes the necessary headers and uses the `sizeof` operator to determine the sizes of the following data types: `char`, `int`, `float`, `double`, and `long`.

2. Print the sizes of these data types in bytes using the `std::cout` statement.

3. Extend the program using constants from the headers `limits.h` and `cfloat` to find out the range of these datatypes. 

## Sample Output

The program should produce output similar to the following (the sizes may vary depending on your operating system):

```code
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of long: 8 bytes

Range of char: -128 to 127
Range of int: -2147483648 to 2147483647
Range of float: 1.17549e-38 to 3.40282e+38
Range of double: 2.22507e-308 to 1.79769e+308
Range of long: -9223372036854775808 to 9223372036854775807
```

## Tips

- Use the `<iostream>` header for input and output operations.
- Include `limits.h` and `cfloat` (yes, without .h)
- To access the `limits.h` constants, use the `INT_MAX`, `FLT_MAX`, `DBL_MAX`, and `LONG_MAX` constants for `int`, `float`, `double`, and `long`, respectively.
  
- `CHAR_MIN` and `CHAR_MAX` for `char`.
- `INT_MIN` and `INT_MAX` for `int`.
- `FLT_MIN` and `FLT_MAX` for `float`.
- `DBL_MIN` and `DBL_MAX` for `double`.
- `LONG_MIN` and `LONG_MAX` for `long`.

## Optional

Find out about `long long` and `long long int`.

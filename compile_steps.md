# Getting to know the Compiler with GCC

In this example, we will demonstrate the compilation steps of a simple "Hello, World!" program in C using the GNU Compiler Collection (GCC). The compilation process involves three main stages: pre-processing, compilation, and linking.

## Step 1: Create the Source Code

Create a new file called `hello.c` and add the following C code:

```c
#include <stdio.h>

int main()
{
    printf("Hello, World!\n");
    return 0;
}
```
Save the file.

## Step 2: Pre-processing

The pre-processing stage involves handling directives and macros. To perform pre-processing, use the following command:

```
gcc -E hello.c -o hello.i
```

- gcc: The GCC compiler.
- -E: Instructs GCC to perform pre-processing only.
- hello.c: The source code file.
- -o hello.i: Specifies the output file as "hello.i" (the pre-processed source code).

This step generates a pre-processed source file hello.i.

Check the content of hello.i

## Step 3: Compilation

The compilation stage involves translating the pre-processed source code into assembly code. To compile the pre-processed source code, use the following command:

```
gcc -S hello.i -o hello.s
```
- -S: Instructs GCC to generate assembly code.

This step generates an assembly code file hello.s. Check if you can read it.

## Step 4: Linking

The linking stage involves linking any necessary libraries and generating the final executable. To link the assembly code and create the executable, use the following command.
Pass the assembly file from the previous step to link it. 
```
gcc hello.s -o hello
```

- -o hello: Specifies the output file name as "hello" (the executable).

## Step 5: Run the Executable

After successful compilation and linking, you can run the resulting executable with the following command:
```
./hello.exe
```
or on a Linux-based system simply call
```
./hello
```

- ./ is the relative path, which needs to be specified when running the binary.

## All at once:

To run all steps at once just do:
```
gcc hello.c -o hello
```

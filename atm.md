# Exercise: ATM Interface Simulation

## Objective

Write a C program that simulates a simple ATM interface using `while` and `for` loops. The program should allow users to perform basic banking operations, including checking their account balance and making withdrawals and deposits. The program should do the following:

1. Initialize a user's bank account balance to a predefined amount (e.g., 1000,00 €).

2. Display a menu of options to the user:
   - Check account balance
   - Make a withdrawal
   - Make a deposit
   - Exit

3. Use a `while` loop to repeatedly display the menu and ask the user to choose an option.

4. Depending on the user's choice, use `for` loops and appropriate logic to perform the following actions:
   - For checking the account balance, display the current balance.
   - For making a withdrawal, ask the user for the withdrawal amount and deduct it from the balance.
   - For making a deposit, ask the user for the deposit amount and add it to the balance.
   - For exiting, terminate the program.

5. Ensure that the program continues to run and allows the user to perform multiple banking operations until they decide to exit.

6. Provide suitable messages and feedback to the user after each operation.

## Instructions

1. Initialize the user's account balance to a predefined amount.

2. Implement a `while` loop that repeatedly displays the menu and asks the user to choose an option.

3. Use nested `for` loops within the `while` loop to perform banking operations based on the user's choice.

4. Include error handling to check if withdrawal amounts are within the available balance and handle invalid inputs.

5. After each operation, ask the user if they want to perform another operation or exit.

6. Use appropriate conditional statements and loop control to ensure that the program continues running until the user decides to exit.

7. Provide suitable messages to guide the user through the process.

# Exercise: BankAccount Class in C++

## Objective

Write a C++ program that creates a `BankAccount` class with member variables and several methods to simulate basic banking operations. The program should have the following features:

1. Initialize a user's bank account balance to a predefined amount (e.g., 1000.00 €).

2. Implement methods to perform the following actions within the `BankAccount` class:
   - `check_balance()`: Display the current balance.
   - `make_withdrawal(amount)`: Deduct a specified amount from the balance.
   - `make_deposit(amount)`: Add a specified amount to the balance.
  
classDiagram
  class BankAccount {
    + balance: double
    + check_balance(): void
    + make_withdrawal(amount: double): void
    + make_deposit(amount: double): void
  }


3. Create an interactive program that uses the `BankAccount` class to allow users to repeatedly choose from a menu of options:
   - Check account balance
   - Make a withdrawal
   - Make a deposit
   - Exit

4. Use a `while` loop to repeatedly display the menu and ask the user to choose an option.

5. Depending on the user's choice, call the appropriate methods of the `BankAccount` class to perform the desired actions and provide feedback to the user after each operation.

6. Ensure that the program continues to run and allows the user to perform multiple banking operations until they decide to exit.

## Instructions

1. Create a C++ class named `BankAccount` with the following private member variables:
   - `balance` (initialized to a predefined amount, e.g., 1000.00 €)

2. Implement the following public methods within the `BankAccount` class:
   - `check_balance()`: Display the current balance.
   - `make_withdrawal(amount)`: Deduct a specified amount from the balance.
   - `make_deposit(amount)`: Add a specified amount to the balance.

3. Create an interactive program outside the class that uses a `while` loop to repeatedly display the menu and ask the user to choose an option.

4. Depending on the user's choice, call the appropriate methods of the `BankAccount` class to perform the desired actions.

5. Include error handling to check if withdrawal amounts are within the available balance and handle invalid inputs.

6. After each operation, ask the user if they want to perform another operation or exit.

7. Use appropriate conditional statements and loop control to ensure that the program continues running until the user decides to exit.

8. Provide suitable messages to guide the user through the process.

## Optional Task: Personal Credit Line Feature

1. **Modify the BankAccount Class:**

   - Update the `BankAccount` class to include an additional member variable for a predefined credit limit.

2. **Implement New Methods:**

   - `get_credit_limit()`: Display the available credit limit.
   - `make_withdrawal_with_credit(amount)`: Allow users to withdraw an amount up to their credit limit, incurring interest on the negative balance. Ensure that users cannot exceed the credit limit.
   - `make_repayment(amount)`: Allow users to make repayments to reduce their negative balance and the interest incurred.

3. **Update the Interactive Program:**

   - Update the menu in the interactive program to include the following options:
     - Check account balance
     - Make a withdrawal (including credit line)
     - Make a deposit
     - Make a repayment
     - Exit

4. **Interest Calculation:**

   - When a user makes a withdrawal beyond their available balance (within the credit limit), they should incur interest on the negative balance. Define an interest rate (e.g., 5% annually) and calculate interest on the negative balance daily.

5. **Feedback and Messages:**

   - Ensure that the program provides suitable feedback and messages to guide the user through the credit line operations.

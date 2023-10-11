# Exercise: Password Verification with While Loops
## Objective

Write a C program that simulates a basic password verification system using while loops. The program should do the following:

Set a predefined password (e.g., "secret123").

Ask the user to enter a password.

Use a while loop to repeatedly prompt the user to enter the password until they enter the correct password or exceed a maximum number of attempts.

If the user enters the correct password within the allowed attempts, display a success message.

If the user exceeds the allowed attempts without entering the correct password, display a failure message. 

**Instructions**

1. Set a predefined password at the beginning of your program.

2. Implement a while loop that repeatedly asks the user to enter a password.

3. Inside the loop, check if the entered password matches the predefined password. If they match, break out of the loop and display a success message.

4. If the passwords do not match, keep track of the number of attempts. If the number of attempts exceeds a predefined maximum (e.g., 3 attempts), break out of the loop and display a failure message.

5. After displaying the result (success or failure), ask the user if they want to try again.

Use appropriate conditional statements and loop control to ensure that the program continues running until the user decides to exit.

Provide suitable messages to guide the user through the process.

**Optional**

Additional requirements:

1. After successfully logging in, provide the user with an option to reset the password.

2. If the user chooses to reset the password, they should be prompted to enter the current password for verification.

3. After successful verification of the current password, allow the user to set a new password. The new password should meet certain criteria, such as a minimum length and complexity requirements (e.g., containing both letters and numbers).

4. Update the predefined password with the new password after a successful reset.

5. Ensure that the program continues to ask the user for the password after a reset, and the new password is required to be entered for subsequent logins.

Provide appropriate messages and instructions to guide the user through the reset process.

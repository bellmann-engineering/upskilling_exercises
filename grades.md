# Exercise: Grade Calculator

## Objective

Write a C program that calculates and displays the grade for a student based on their numeric score. The program should do the following:

1. Ask the user to input their numeric score as a floating-point number (e.g., 92.5).

2. Use `if` conditions to determine the grade based on the following criteria:
   - A: 90 - 100
   - B: 80 - 89.9
   - C: 70 - 79.9
   - D: 60 - 69.9
   - F: 0 - 59.9

3. Use a `switch` statement to display a message corresponding to the grade. For example, if the grade is 'A', the program should display "Excellent! Well done!" If the grade is 'F', the program should display "Sorry, you need to improve."

4. If the input score is not within the valid range (0 - 100), display an error message.

5. After displaying the grade or an error message, ask the user if they want to calculate another grade. If they do, repeat the process; if not, exit the program.

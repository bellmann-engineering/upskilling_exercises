# Exercise: Automobile Decision Maker

## Objective

Write a C program that helps a user make a decision about whether to buy an automobile based on two conditions: the car's price (in euros) and its fuel efficiency. The program should do the following:

1. Ask the user to input the price of the car (in euros) and the fuel efficiency (in miles per gallon, MPG).

2. Use `if` conditions and logical operators (`&&` and `||`) to make the decision based on the following criteria:
   - The user should consider buying the car if the price is less than €20,000 and the fuel efficiency is greater than or equal to 30 MPG.
   - The user should also consider buying the car if the price is less than €15,000, regardless of fuel efficiency.
   - In all other cases, the program should advise the user not to buy the car.

3. Display an appropriate message based on the decision made in step 2. For example, if the user should consider buying the car, the program should display "You should consider buying this car!" If not, it should display "You might want to look for another option."

4. After making the decision, ask the user if they want to evaluate another car. If they do, repeat the process; if not, exit the program.

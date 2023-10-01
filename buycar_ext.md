# Exercise: Evaluating Electric Cars (E-Cars)

## Objective

Extend the existing C program for evaluating traditional cars. Add the feature to evaluate electric cars (e-cars). 

The program should do the following:

1. Provide users with the option to evaluate an electric car (e-car) in addition to traditional cars.
   
2. If the user selects the option to evaluate an e-car:
   - Ask the user to input the price (in euros) and the electric range (in kilometers) of the e-car.
   - Use `if` conditions and logical operators to make the decision based on the following criteria:
     - Consider buying the e-car if the price is less than €30,000 and the electric range is greater than or equal to 200 kilometers.
     - Also, consider buying the e-car if the price is less than €20,000, regardless of the electric range.
     - In all other cases, advise the user not to buy the e-car.

3. Display an appropriate message based on the decision made in step 2. For example, if the user should consider buying the e-car, the program should display "You should consider buying this electric car (e-car)!" If not, it should display "You might want to look for another option."

4. Continue to allow users to evaluate traditional cars as in the basic version of the program.

5. After evaluating a traditional car or an e-car, ask the user if they want to evaluate another car or e-car. If they do, repeat the process; if not, exit the program.

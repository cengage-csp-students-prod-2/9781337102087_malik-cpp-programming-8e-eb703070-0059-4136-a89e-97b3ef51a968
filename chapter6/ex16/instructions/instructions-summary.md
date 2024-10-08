## Instructions
Consider the definition of the function main in the provided file *main.cpp*:

The variables `x`, `y`, `z`, `rate`, and `hours` referred to in the bullets below are the variables of the function `main`. Each of the functions described must have the appropriate parameters to access these variables. Write the following definitions:
* Write the definition of the function `initialize` that initializes `x` and `y` to **0** and `z` to the blank character.
* Write the definition of the function `getHoursRate` that prompts the user to input the hours worked and rate per hour to initialize the variables `hours` and `rate` of the function `main`.
* Write the definition of the value-returning function `paycheck` that calculates and returns the amount to be paid to an employee based on the hours worked and rate per hour. The hours worked and rate per hour are stored in the variables `hours` and `rate`, respectively, of the function `main`.  

  The formula for calculating the amount to be paid is as follows:  

  *For the first 40 hours, the rate is the given rate; for hours over 40, the rate is 1.5 times the given rate.*
* Write the definition of the function `printCheck` that prints the hours worked, rate per hour, and the salary.
* Write the definition of the function `funcOne` that sets the value of `x` and `y` to **35** and **20** respectively. Then prompt the user to input a number. The function then changes the value of `x` by assigning the value of the expression two times the (old) value of `x` plus the value of `y` minus the value entered by the user.
* Write the definition of the function `nextChar` that sets the value of `z` to the next character stored in `z`.

An example of the program is shown below:
```text
After initialization: x = 0, y = 0, z =  
Enter hours worked: 60

Enter pay rate: 20

Hours worked:       60
Pay Rate:           $20
This week's salary: $1400
Before calling funcOne: x = 35, y = 20
Enter an integer: 
2

After funcOne: x = 88
z = B
After nextChar: z = C
```

## Instructions
Write a program to help a local restaurant automate its breakfast billing system. The program should do the following:
1. Show the customer the different breakfast items offered by the restaurant.
1. Allow the customer to select more than one item from the menu.
1. Calculate and print the bill.

Assume that the restaurant offers the following breakfast items (the price of each item is shown to the right of the item):

|food|Price|
| :------------- |:-------------:| 
| Plain Egg      | $1.45|
| Bacon and Egg | $2.45|
|Muffin | $0.99 |
|French Toast | $1.99 |
|Fruit Basket | $2.49 |
|Cereal | $0.69 |
|Coffee | $0.50 |
|Tea | $0.75|

Use an array `menuList` of type `menuItemType`, as defined in _Programming Exercise 3_. Your program must contain at least the following functions:
* Function `getData`: This function loads the data into the array `menuList`.
* Function `showMenu`: This function shows the different items offered by the restaurant and tells the user how to select the items.
* Function `printCheck`: This function calculates and prints the check. (Note that the billing amount should include a 5% tax.)

A sample output is:

```
Welcome to Johnny's Resturant                                        
----Today's Menu----                                                 
1: Plain Egg       $1.45                                             
2: Bacon and Egg   $2.45                                             
3: Muffin          $0.99                                             
4: French Toast    $1.99                                             
5: Fruit Basket    $2.49                                             
6: Cereal          $0.69                                             
7: Coffee          $0.50                                             
8: Tea             $0.75                                             
                                                                     
You can make up to 8 single order selections                         
Do you want to make selection Y/y (Yes), N/n (No): Y                 
                                                                     
Enter item number: 1                                                 
                                                                     
Select another item Y/y (Yes), N/n (No): Y                           
                                                                     
Enter item number: 2                                                 
                                                                     
Select another item Y/y (Yes), N/n (No): N                           
                                                                     
Welcome to Johnny's Resturant                                        
Plain Egg       $1.45                                                
Bacon and Egg   $2.45                                                
Tax             $0.20                                                
Amount Due      $4.10
```


Format your output with two decimal places. The name of each item in the output must be left justified. You may assume that the user selects only one item of a particular type. 


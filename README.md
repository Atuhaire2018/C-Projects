# C-Projects
A Repository that contains all the C Projects that were attempted in Group work with the formulas and steps taught in class and no new ones

# Campus Canteen Billing Program

A simple menu-driven program written in C that lets a customer order items from a campus canteen, keeps a running total, and applies a discount on large orders.

## Features

- Menu-driven interface that repeats until the customer asks for the total
- Four menu items, each with a fixed price
- Calculates the cost of each item from its quantity
- Keeps a running total across all items ordered
- Applies a discount when the total is above 10,000
- Rejects invalid menu choices and returns to the menu

## Menu and Prices

| Choice | Item   | Price (per unit) |
|--------|--------|------------------|
| 1      | Beans  | 5,000            |
| 2      | G.Nuts | 4,000            |
| 3      | Meat   | 6,000            |
| 4      | Peas   | 3,000            |
| 0      | Total  | Ends the order and prints the bill |

## Discount Rule

If the total is **greater than 10,000**, a discount of 50% of the total is applied. The program then prints the discount and the final amount to pay. Totals of 10,000 or less get no discount.

## How It Works

1. The menu is displayed inside an infinite `while (1)` loop.
2. The user enters a choice. A `switch` statement handles it:
   - **Cases 1 to 4:** ask for a quantity, calculate `price * quantity`, and print the cost of that item.
   - **Case 0:** print the total, apply the discount if it qualifies, print the amount to pay, and end the program.
   - **Default:** print "Invalid Input Choice" and `continue` back to the menu.
3. After a valid item, the cost is added to `total`, and the loop repeats.

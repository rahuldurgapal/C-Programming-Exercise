Write a program in C that calculates the electricity bill of a house.

Take input:

Consumer name

Units consumed

Rules:

For first 100 units → ₹5 per unit

Next 100 units (101–200) → ₹7 per unit

Above 200 units → ₹10 per unit

If total bill exceeds ₹2000, give 10% discount using ternary operator.

If units entered is negative → show “Invalid Input” and use continue to re-enter.

Use switch to allow user choice:

1 → Print only bill amount

2 → Print name + units + bill

3 → Print “High Usage” if units > 300 else “Normal Usage”

Use:

for loop → To allow multiple consumers’ bills in one run

while loop → To keep program running until user exits
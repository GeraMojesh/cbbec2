# 1.Check if a number is even or odd
num = int(input("Enter number: "))  # Take input from user
print("Even" if num % 2 == 0 else "Odd")  # Print "Even" if divisible by 2, else "Odd"

# 2.Determine if a number is positive, negative, or zero
num = float(input("Enter number: "))  # Take input from user
# Print "Positive" if greater than 0, "Negative" if less than 0, else "Zero"
print("Positive" if num > 0 else "Negative" if num < 0 else "Zero")

# 3.Find the largest of two numbers
a, b = map(float, input("Enter two numbers: ").split())  # Take two numbers as input
print(max(a, b))  # Print the maximum of the two numbers

# 4.Find the largest of three numbers
a, b, c = map(float, input("Enter three numbers: ").split())  # Take three numbers as input
print(max(a, b, c))  # Print the maximum of the three numbers

# 5.Check if a person is eligible to vote based on age
age = int(input("Enter age: "))  # Take age as input
# Print "Eligible" if age is 18 or older, else "Not eligible"
print("Eligible" if age >= 18 else "Not eligible")

# 6.Check if a year is a leap year
year = int(input("Enter year: "))  # Take year as input
# A year is a leap year if divisible by 4, not divisible by 100 unless also divisible by 400
print("Leap" if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0 else "Not leap")

# 7.Calculate electricity bill based on units consumed
units = int(input("Enter units: "))  # Take number of units as input
# Assuming a rate of ₹5.5 per unit, calculate and print the bill
print(f"Bill: ₹{units * 5.5:.2f}")  # Format the bill to two decimal places

# 8.Calculate total bill for products purchased
price, qty = map(float, input("Enter price & quantity: ").split())  # Take price and quantity as input
# Calculate and print the total bill
print(f"Total: ₹{price * qty:.2f}")  # Format the total to two decimal places

# 9.Grade a student based on percentage
marks = float(input("Enter percentage: "))  # Take percentage as input
# Assign grades based on percentage ranges and print the grade
("A" if marks >= 90 else "B" if marks >= 75 else "C" if marks >= 50 else "D")

# 10.Check if a character is a vowel or consonant
char = input("Enter character: ")[0]  # Take a character as input
# Print "Vowel" if in 'aeiou', else "Consonant"
print("Vowel" if char.lower() in 'aeiou' else "Consonant")

# 11.Display the corresponding day of the week based on a number
days = ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"]  # List of days
day = int(input("Enter day (0-6): "))  # Take day number as input
# Print the corresponding day using modulo to wrap around
print(days[day % 7])

# 12.Perform basic arithmetic operations
a, b = map(float, input("Enter two numbers: ").split())  # Take two numbers as input
op = input("Enter operation (+-*/): ")  # Take operation as input
# Use eval to perform the operation and print the result
print(eval(f"{a}{op}{b}")) if op in '+-*/' else print("Invalid operator")

# 13.Check if the first number is a multiple of the second
a, b = map(int, input("Enter two numbers: ").split())  # Take two numbers as input
# Print "Multiple" if a is divisible by b, else "Not multiple"
print("Multiple" if a % b == 0 else "Not multiple")

# 14.Determine the quadrant of an angle
angle = float(input("Enter angle: "))  # Take angle as input
# Determine the quadrant based on the angle range and print it
q = "1st" if 0 < angle < 90 else "2nd" if 90 < angle < 180 else "3rd" if 180 < angle < 270 else "4th" if 270 < angle < 360 else "axis"
print(q)

# 15.Convert a number of days into years, months, weeks, and remaining days
days = int(input("Enter days: "))  # Take number of days as input
# Calculate years, months, weeks, and remaining days
y, m = days // 365, (days % 365) // 30
w, d = (days % 30) // 7, days % 7
# Print the result in a formatted string
print(f"{y} years, {m} months, {w} weeks, {d} days")

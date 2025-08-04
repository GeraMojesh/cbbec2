#1.Print Natural Numbers
n = int(input("Enter limit: "))  # Take input from user
print(*range(1, n + 1))  # Print natural numbers from 1 to n

#2.Print Natural Numbers in Reverse order
n = int(input("Enter limit: "))  # Take input from user
print(*range(n, 0, -1))  # Print natural numbers from n to 1

#3.Print Odd Numbers & sum of Odd Numbers
n = int(input("Enter limit: "))  # Take input from user
odd_numbers = [i for i in range(1, n + 1) if i % 2 != 0]
print(*odd_numbers, '\nSum of Odd Numbers:', sum(odd_numbers))  # Print odd numbers and their sum

#4.Print Even Numbers & sum of Even Numbers
n = int(input("Enter limit: "))  # Take input from user
even_numbers = [i for i in range(1, n + 1) if i % 2 == 0]
print(*even_numbers, '\nSum of Even Numbers:', sum(even_numbers))  # Print even numbers and their sum

#5.Printing number, its square, its cube in the range (1,n)
n = int(input("Enter limit: "))  # Take input from user
for i in range(1, n + 1): print(i, i**2, i**3)  # Print number, its square, and cube

#6.Multiplication Table of any Number
num = int(input("Enter a number: "))  # Take input from user
for i in range(1, 11): print(f"{num} x {i} = {num * i}")  # Print multiplication table

#7.Factorial
n = int(input("Enter a non-negative integer: "))  # Take input from user
factorial = 1
for i in range(1, n + 1): factorial *= i  # Calculate factorial
print(f"Factorial of {n} is: {factorial}")

#8.Fibonacci Series
n = int(input("Enter the number of terms: "))  # Take input from user
a, b = 0, 1
for _ in range(n):
    print(a, end=' ')
    a, b = b, a + b  # Update values

#9.Prime Check
  num = int(input("Enter a number: "))  # Take input from user
is_prime = num > 1 and all(num % i != 0 for i in range(2, int(num**0.5) + 1))
print(f"{num} is {'Prime' if is_prime else 'Not Prime'}")

#10.Factors of given number
num = int(input("Enter a number: "))  # Take input from user
factors = [i for i in range(1, num + 1) if num % i == 0]
print("Factors:", *factors)  # Print factors

#11.Prime Factors
num = int(input("Enter a number: "))  # Take input from user
prime_factors = [i for i in range(2, num + 1) if num % i == 0 and all(i % j != 0 for j in range(2, int(i**0.5) + 1))]
print("Prime Factors:", *prime_factors)  # Print prime factors

#12.Finding Individual Digits
num = int(input("Enter a number: "))  # Take input from user
digits = [int(d) for d in str(num)]
print("Individual Digits:", *digits)  # Print individual digits

#13.Count Number of Digits
num = int(input("Enter a number: "))  # Take input from user
count = len(str(num))
print("Number of Digits:", count)  # Print count of digits

#14.Sum of Individual Digits
num = int(input("Enter a number: "))  # Take input from user
digit_sum = sum(int(d) for d in str(num))
print("Sum of Individual Digits:", digit_sum)  # Print sum of digits

#15.Reverse of a Number
num = int(input("Enter a number: "))  # Take input from user
reversed_num = int(str(num)[::-1])
print("Reversed Number:", reversed_num)  # Print reversed number

#16.Number Palindrome
num = int(input("Enter a number: "))  # Take input from user
is_palindrome = str(num) == str(num)[::-1]
print(f"{num} is {'a Palindrome' if is_palindrome else 'Not a Palindrome'}")

#17.Strong Number
num = int(input("Enter a number: "))  # Take input from user
strong_sum = sum(factorial(int(d)) for d in str(num))
print(f"{num} is {'a Strong Number' if strong_sum == num else 'Not a Strong Number'}")

#18.Perfect Number
num = int(input("Enter a number: "))  # Take input from user
perfect_sum = sum(i for i in range(1, num) if num % i == 0)
print(f"{num} is {'a Perfect Number' if perfect_sum == num else 'Not a Perfect Number'}")

#19.Armstrong Number (nth Number)
num = int(input("Enter a number: "))  # Take input from user
order = len(str(num))
armstrong_sum = sum(int(d) ** order for d in str(num))
print(f"{num} is {'an Armstrong Number' if armstrong_sum == num else 'Not an Armstrong Number'}")

#20.Sum of n natural numbers
n = int(input("Enter limit: "))  # Take input from user
total_sum = sum(range(1, n + 1))
print("Sum of first", n, "natural numbers is:", total_sum)  # Print sum

#21.Sum of squares of numbers between x…y
x, y = map(int, input("Enter two numbers (x y): ").split())  # Take input from user
sum_squares = sum(i**2 for i in range(x, y + 1))
print("Sum of squares between", x, "and", y, "is:", sum_squares)  # Print sum of squares

#22.Sum of cubes of numbers between x…y
x, y = map(int, input("Enter two numbers (x y): ").split())  # Take input from user
sum_cubes = sum(i**3 for i in range(x, y + 1))
print("Sum of cubes between", x, "and", y, "is:", sum_cubes)  # Print sum of cubes

#23.Prime numbers between x…y.
x, y = map(int, input("Enter two numbers (x y): ").split())  # Take input from user
primes = [i for i in range(x, y + 1) if i > 1 and all(i % j != 0 for j in range(2, int(i**0.5) + 1))]
print("Prime numbers between", x, "and", y, "are:", *primes)  # Print prime numbers

#24.Display all numbers from 1-100 that are not divisible by x and y
x, y = map(int, input("Enter two numbers (x y): ").split())  # Take input from user
not_divisible = [i for i in range(1, 101) if i % x != 0 and i % y != 0]
print("Numbers from 1 to 100 not divisible by", x, "and", y, "are:", *not_divisible)  # Print numbers

#25.Display all numbers from 1-100 that are divisible by x and y
x, y = map(int, input("Enter two numbers (x y): ").split())  # Take input from user
divisible = [i for i in range(1, 101) if i % x == 0 and i % y == 0]
print("Numbers from 1 to 100 divisible by", x, "and", y, "are:", *divisible)  # Print numbers

//5.	Write a python program to find the numbers which are divisible by 7 and multiple of 5 between 1500 and 2700. //
numbers = [num for num in range(1500, 2701) if num % 7 == 0 and num % 5 == 0]
print("Numbers divisible by 7 and multiples of 5 between 1500 and 2700:")
print(numbers)

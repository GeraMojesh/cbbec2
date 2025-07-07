//2.	Write a python program to take a string from user and count number of vowels Present and percentage of vowels in it.  //
string = input("Enter a string: ")
vowels = "aeiouAEIOU"
count_vowels = sum(1 for char in string if char in vowels)
total_characters = len(string)
percentage_vowels = (count_vowels / total_characters) * 100 if total_characters > 0 else 0

print(f"Number of vowels: {count_vowels}")
print(f"Percentage of vowels: {percentage_vowels:.2f}%")

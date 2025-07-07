//3.	Write a python program to find the most frequent words in a text file. //
from collections import Counter

filename = input("Enter the filename: ")
with open(filename, 'r') as file:
    text = file.read().lower().split()

word_count = Counter(text)
most_common_words = word_count.most_common(10)

print("Most frequent words:")
for word, count in most_common_words:
    print(f"{word}: {count}")

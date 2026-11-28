## Wordsmiths - Word and Text Analyzer
# Mini Hackathon for C Programming Lab

## 1. Project Details

**Project Title:** Word and Text Analyzer  
**Team Name:** Wordsmiths  
**Problem Number:** 9  
**Batch:** 53

**Team Members:**
1. Ronit Yadav


## 2. Problem Statement

Develop a text analysis tool in C that processes a sentence entered by the user. The program counts characters, words, vowels and consonants, identifies the longest word, and checks whether a given word or sentence is a palindrome.

It should also handle empty input and spaces correctly, while ignoring spaces and letter case during palindrome checking.

## 3. Objectives and Features

The main objectives of this project are to:

- Analyze user-entered text and generate useful statistics.
- Count the total number of characters and words.
- Calculate the number of vowels and consonants.
- Identify and display the longest word.
- Check whether a word or sentence is a palindrome.
- Handle spaces, punctuation and empty input appropriately.

**Main Features:**
- Text statistics report.
- Longest word identification.
- Case-insensitive palindrome checking.
- Input validation and empty input handling.

## 4. Algorithm / Pseudocode

**Text Analysis:**
1. Accept a sentence from the user.
2. Check whether the input is empty.
3. Count characters, vowels and consonants.
4. Identify individual words and count them.
5. Find the longest word.
6. Display the text analysis report.

**Palindrome Checking:**
1. Accept a word or sentence.
2. Ignore spaces and punctuation and convert letters to lowercase.
3. Compare characters from both ends, moving towards the middle.
4. If any characters do not match, the input is not a palindrome.
5. Otherwise, display that it is a palindrome.

## 5. C Programming Concepts Used

- **Character Arrays:** To store sentences and words.
- **Loops:** To traverse strings and perform calculations.
- **Conditional Statements:** To check vowels, consonants and palindrome conditions.
- **String Handling:** Functions such as `strlen()`, `strcpy()` and `strcspn()`.
- **Character Handling:** Functions such as `isalpha()`, `isalnum()`, `isspace()` and `tolower()`.
- **Input/Output Functions:** `fgets()` and `printf()`.

**Header Files:**
- `stdio.h` – Input and output operations.
- `string.h` – String manipulation.
- `ctype.h` – Character checking and conversion.

## 6. Conclusion

The Word and Text Analyzer demonstrates the application of fundamental C programming concepts in text processing. It combines loops, conditional statements, character arrays and string functions to analyze text and perform palindrome checking.

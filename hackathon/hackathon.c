#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[500], word[500], longest[500];
    char pal[500];

    int i, j, start, end, length;
    int characters, words = 0, vowels = 0, consonants = 0;
    int maxLength = 0, palindrome = 1, compared = 0;

    // Accept the sentence
    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    // Check for empty input
    i = 0;

    while (isspace((unsigned char)text[i])) {
        i++;
    }

    if (text[i] == '\0') {
        printf("Empty input!\n");
        return 0;
    }

    // Count characters
    characters = strlen(text);

    // Count vowels and consonants
    for (i = 0; text[i] != '\0'; i++) {
        if (isalpha((unsigned char)text[i])) {
            char ch = tolower((unsigned char)text[i]);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    // Count words and find the longest word
    length = 0;

    for (i = 0; i <= characters; i++) {
        if (isalpha((unsigned char)text[i])) {
            word[length] = text[i];
            length++;
        } else {
            if (length > 0) {
                word[length] = '\0';
                words++;

                if (length > maxLength) {
                    maxLength = length;
                    strcpy(longest, word);
                }

                length = 0;
            }
        }
    }

    // Display text statistics
    printf("\n--- TEXT ANALYSIS REPORT ---\n");
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    if (maxLength > 0) {
        printf("Longest word: %s\n", longest);
    } else {
        printf("Longest word: None\n");
    }

    // Accept input for palindrome checking
    printf("\nEnter a word or sentence to check palindrome: ");
    fgets(pal, sizeof(pal), stdin);

    pal[strcspn(pal, "\n")] = '\0';

    // Check palindrome ignoring spaces, punctuation and case
    start = 0;
    end = strlen(pal) - 1;

    while (start < end) {
        if (!isalnum((unsigned char)pal[start])) {
            start++;
        } else if (!isalnum((unsigned char)pal[end])) {
            end--;
        } else {
            compared++;

            if (tolower((unsigned char)pal[start]) !=
                tolower((unsigned char)pal[end])) {
                palindrome = 0;
                break;
            }

            start++;
            end--;
        }
    }

    // Empty or punctuation-only input is not considered a palindrome
    if (compared == 0) {
        palindrome = 0;
    }

    if (palindrome == 1) {
        printf("Palindrome: Yes\n");
    } else {
        printf("Palindrome: No\n");
    }
    
    return 0;
}
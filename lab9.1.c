#include <stdio.h>
#include <ctype.h>

int countVowelWords(char *text);
void printWordsWithOddConsonants(char *text);

int main() {
    char text[1000];
    printf("Enter a text string: ");
    fgets(text, sizeof(text), stdin);

    int vowelWordCount = countVowelWords(text);
    printf("number of words beginning with a vowel letter: %d\n", vowelWordCount);

    printf("Words with an odd number of consonant letters:\n");
    printWordsWithOddConsonants(text);

    return 0;
}

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' ||  c == 'i' ||  c == 'u' || c == 'e' || c == 'o' || c == 'y');
}

int countVowelWords(char *text) {
    int count = 0;
    int isWord = 0;

    while (*text) {
        if (isalpha(*text)) {
            if (!isWord) {
                if (isVowel(*text)) {
                    count++;
                    isWord = 1;
                }
            }
        } else {
            isWord = 0;
        }

        text++;
    }

    return count;
}

int countConsonants(char *word) {
    int count = 0;

    while (*word) {
        if (isalpha(*word) && !isVowel(*word)) {
            count++;
        }

        word++;
    }

    return count;
}

void printWordsWithOddConsonants(char *text) {
    int isWord = 0;
    char word[100];
    int wordIndex = 0;

    while (*text) {
        if (isalpha(*text)) {
            if (!isWord) {
                isWord = 1;
                wordIndex = 0;
            }
            word[wordIndex++] = *text;
        } else {
            if (isWord) {
                word[wordIndex] = '\0';
                if (countConsonants(word) % 2 != 0) {
                    printf("%s\n", word);
                }
                isWord = 0;
            }
        }

        text++;
    }
}
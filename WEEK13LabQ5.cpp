#include<stdio.h>
//This program takes a sentence and calculates how many words that sentence include.

int Word_counter(char string[100]) {
    int word_count = 1; // Start with 1 to count the last word

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ') {
            word_count++;
        }
    }

    return word_count;
}

int main() {
    int cnt;
    char sentence[100];

    printf("Enter a sentence: \n");
    gets(sentence);

    cnt = Word_counter(sentence);

    printf("The sentence includes %d words.\n", cnt);

    return 0;
}


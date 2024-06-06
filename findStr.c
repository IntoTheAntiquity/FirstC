#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20
#define FOUR_LETTERS 4

//hello find me

int main() {
    char smallest_word[MAX_LENGTH + 1]; // +1 for null terminator
    char largest_word[MAX_LENGTH + 1];
    char word[MAX_LENGTH + 1];

    printf("Enter word: ");
    scanf("%s", word);

    strcpy(smallest_word, word);
    strcpy(largest_word, word);


    while (strlen(word) != FOUR_LETTERS) {
        printf("Enter word: ");
        scanf("%s", word);

        if (strcmp(word, smallest_word) < 0) {
            strcpy(smallest_word, word);
        }
        if (strcmp(word, largest_word) > 0) {
            strcpy(largest_word, word);
        }
    }

    printf("\nSmallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}

#include <stdio.h>

#define N 100 // Define the size of the array 'a'
/*
 * Made a little cchange to see where it goes
 */

int main() {
    int a[N]; // Declare an array 'a' of size N
    int i, j;

    // Loop to initialize array 'a' elements
    for (i = 0; i < N; i++) {
        for (j = 0; j < 10; j++) {
            a[i + j * 10] = 0;
        }
    }

    // Print the array 'a' to verify the initialization
    printf("Array 'a' after initialization:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>



int main() {
    int age;
    char name[50];

    // Input
    printf("Enter your name: ");
    // "%s" tells printf() to expect a string argument
    // "%d" tells scanf() to expect an integer argument
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Output
    printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}


# FirstC
We are learning C in class


I gotta figure this out ;_; but anyway for future me

#include <stdio.h>

int main(void*) {
    int num;
    int secnum;
    
    num = 6;
    secnum = 4;
    int sum = num / secnum;
   
    printf("First number %i\n", sum);

    // Increment num by one
    sum++;

    // Print the updated value of num
    printf("The incremented value of num is: %d\n", sum);

    return 0;
}


more


#include <stdio.h>

int main() {
    
    int first;
    int second;
    int secret = 5;
    
    int guess;
    
    printf("Please enter the first you want to add to the secret number: ");
    scanf("%i", &first);
    
    printf("Please enter the second number you want to enter: ");
    scanf("%i", &second);
    
    int sum = first + second + secret;
    
    printf(" This is the sum: %d Can you guess the secret number absed of the answer?: ",sum);
    scanf("%i", &guess);
    
    while (secret != guess) {
        printf("No, sorry try again.Enter your guess: ");
        scanf("%d", &guess);
    }


    today (4/1/24)

    // Online C compiler to run C program online
#include <stdio.h>

int main() {

int x = 6, y = 3;

 
 printf("%d %% %d divides equally so it has no remainder = %d\n", x, y, x % y);

    return 0;
}
    
    printf("You got it !!\n");
    
    return 0;
}

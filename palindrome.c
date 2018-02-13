#include <stdio.h>

int main (void) {
    int number, reverse = 0, remainder, store;
    printf("Please enter a number: \n");
    scanf("%d", &number);
    store = number; 
    while (number!=0) 
    {
        remainder = number % 10;
        reverse = (reverse*10) + remainder;
        number /= 10;
    }

    if (reverse == store)   //If the value of thhe reversed number is equal to the original number we stored, print the following:
        printf("This is a palindrome");
    else    //If not, print the following:
        printf("This is not a palindrome\n");
    return 0;
    }
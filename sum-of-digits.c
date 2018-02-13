//Question: Write a C program to calculate the sum of all the digits of a number.

#include <stdio.h>
int main (void) {
    int number, digit, sum = 0;

    printf("Please enter a number: \n");
    scanf("%d\n", &number);
    while (number>0)
    {
        digit = number % 10;    //As long as the number is > 0, keep extracting thr last digit
        sum = sum + digit;  //Keep adding the extractions to the sum which originally was 0
        number = number / 10;   //Keep dividing the number by 10 in order to shorten the length of it
    }
    printf("The sum of the digits of the number you entered is %d", sum);
    return 0;
}
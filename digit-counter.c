//Question: Write a C program to count the number of digits in a number.

#include <stdio.h>
int main (void) {
    long long n;
    int count = 0;  //Initialising the integer "count" from 0

    printf("Enter the number you wish to find the digit count of:");
    scanf("%d", &n);

    while (n != 0)  //Till the time n is not equal to 0
    {
        n /= 10     //Keep dividing n by 10
        ++count;    //And keep increasing the count by 1
    }

    printf("The number of digits is %d", count);
    return 0;
}

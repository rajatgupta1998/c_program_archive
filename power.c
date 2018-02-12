/*
Take a base value and exponent as an input from user. Write a program to find the power of a given number.

Sample Input:

10

2

Sample Output:

100
*/
#include <stdio.h>
#include <math.h>

int main(void) {
    int var1,var2,var3;
    scanf("%d",&var1); scanf("%d",&var2);
    var3=pow(var1,var2);
    printf("%d",var3);
    
    return 0;
}
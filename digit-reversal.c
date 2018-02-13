//Question: Reverse the number

#include <stdio.h>

int main (void) {
    int number, reverse=0, remainder;   
    printf("Please enter a number:\n");
    scanf("%d", &number);
    while (number!=0)    //For the time n is not equal to 0
    {   
        remainder = number%10;  //Keep extracting the last digit every new sequence
        reverse = (reverse*10) + remainder; //Keep adding the previous extraction's multiplier by 10 to thhe new extraction
        number /= 10;   //Keep removing the last digit i.e. the latest extraction from the original number
    }
    printf("The reversed number is %d", reverse);
    return 0;
}
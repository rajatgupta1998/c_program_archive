/*
Patrick and Johnny decided to take a taxi cab from airport to the resort.

They both hired a cab and travelled to resort. After reaching the resort, the taxi driver told them the cost of the travel in dollars ( $ ). Patrick and Johnny were confused since they were new to the dollar currency. They exactly knew the cents they have. Help them to calculate the balance dollars and cents they would have after paying for the taxi.

NOTE : 100 cents = 1 dollar

Input Format:

Input consists of 2 integers. The first integer corresponds to the number of cents and the second integer corresponds to the cost to be paid for the taxi (in dollars).

Output Format:

Output consists of a float number representing remaining dollars and cents.

The floating point values are displayed correct to 2 decimal places.

Sample Input and Output:

Enter cents :

650

Enter taxi fare (in Dollars) :

5

Balance : $1.50

Sample Input and Output:

Enter cents :

100

Enter taxi fare (in Dollars) :

7

*/

#include <stdio.h>

int main (void)
{ 
    int cents,fare;
    float bal,dollars;
    
    printf("Enter cents :\n"); 
    scanf("%d",&cents);
    printf("Enter taxi fare (in Dollars) : ");
    scanf("%d",&fare);
    
    float cents2 = cents; //convert cents to floating type
    dollars = cents2/100; // $1 = 100 cents  
    bal=dollars-fare; 
    printf("\nBalance : $%.2f",bal);
    
    return 0;
}
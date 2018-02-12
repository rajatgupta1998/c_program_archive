/*
Input marks of five subjects from user and find the total average and percentage for these subjects.

Sample Input:

55
67
78
89
90

Sample Output:

Average marks = 75.80

Percentage = 75.80
*/

#include <stdio.h>
int main(void) 
{
    float s1,s2,s3,s4,s5,total,avg,perc;
    
    scanf("%f",&s1);
    scanf("%f",&s2);
    scanf("%f",&s3);
    scanf("%f",&s4);
    scanf("%f",&s5);
    
    total=s1+s2+s3+s4+s5;
    avg=total/5;
    
    printf("Average marks = %0.2f\n",avg);
    perc=avg;
    printf("Percentage = %0.2f",perc);

    return 0;
}
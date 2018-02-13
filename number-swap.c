#include <stdio.h>

int main(void)
{
float temp, a,b;
printf("enter a \n"); scanf("%f",&a);
printf("enter b \n"); scanf("%f",&b);
temp=a;
a=b;
b=temp;
printf("swapped a=%f \n",a);printf("swapped b=%f \n",b);
return 0;
} 
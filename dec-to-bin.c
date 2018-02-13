#include<stdio.h>
    
int main(void)
    {  
    int var[10],number,counter;      
    printf("Enter the number to convert: ");    
    scanf("%d",&number);    
    for(counter=0;number>0;counter++)    
    {    
    var[counter]=number%2;    
    number=number/2;    
    }    
    printf("\nBinary of Given Number is=");    
    for(counter=counter-1;counter>=0;counter--)    
    {    
    printf("%d",var[counter]);    
    }    
    return 0;  
    }  
/*
You have given two angles of a triangle. Find the third angle of a triangle.

 

Sample Input:

45

56

Sample Output:

79
*/
#include <stdio.h>

int main(void) {
    int a1,a2,a3;
    printf("Enter Angle 1\n");
    scanf("%d",&a1);
    printf("Enter Angle 2\n");
    scanf("%d",&a2);
    const int sum=180;
    a3=180-(a1+a2);
    if(sum<=180)
     {
      printf("Angle 3 is %d\n",a3);
     }
    return 0;
}
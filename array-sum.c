#include <stdio.h>

int main(void)
{
int n,i,j;
scanf("%d\n",&n);
int arr[n],sum=0;
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum+=arr[i];
}
printf("sum is %d",sum);
return 0;
}
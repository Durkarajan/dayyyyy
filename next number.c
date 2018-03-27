#include<stdio.h>
int main()
{
int i,j;
int sum=0;
printf("Enter the max values of series:");
scanf("%d",&i);
sum=(j*(i+1))/2;
printf("Sum of the series:");
for(j=1;j<=i;j++)
{
if(j!=i)
printf("%d+",j);
else
printf("%d=%d",j,sum);
}
return 0;
}

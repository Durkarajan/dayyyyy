#include<stdio.h>
void main()
{
int i,n,sum=0,num;
float Avg;
printf("\nEnter How many Number you want?\n");
scanf("%d",&n);
printf("\nEnter the elements one by one\n");
for(i=0;i<n;++i)
{
scanf("%d",&num);
sum=sum+num;
} 
Avg=sum/n;
printf("\nSum of the %d Numbers=%d",n,sum);
printf("\nAvg. of the %d Numbers=%.2f",n, Avg);
return 0;
}

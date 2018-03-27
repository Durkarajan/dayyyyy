#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
printf("Enter the number:");
scanf("%d",&i);
j=(i&(i-1));
if(j==0)
printf("\n%d is power of 2",i);
else
printf("\n%d not a power of 2",i);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter the year");
scanf("%d",&n);
if(n%4==0)
{
printf("leap year");
else
printf("not a leap year");
}
getch();
}

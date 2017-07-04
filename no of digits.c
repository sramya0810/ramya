#include<stdio.h>
void main()
{
int num, count=0;
printf("\n enter the number");
scanf("%d",&num);
while(num>0)
{
num=num/10;
count=count+1;
}
printf("the number of digits are",count);
getch();
}

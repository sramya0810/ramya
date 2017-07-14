#include<stdio.h>
int  power(int ,int);
int main()
{
 int r,x,c;
 printf("Enter the number\n");
 scanf("%d",&x);
 printf("Enter the power\n");
 scanf("%d",&c);
 r=power(x,c);
 printf("Value of %d^%d = %d",x,c,r);
 getch();
}
int power(int c, int d)
{
int pow=1;
int i=1;
while(i<=d)
{
pow=pow*c;
i++;
}
return pow;
}

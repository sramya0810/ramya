#include<stdio.h>
void main()
{
int n,flag=0;
printf("enter the number");
scanf("%d",&n);
for(int i=0;i<n/2;i++)
{
if(n%2==0)
{
printf("not a prime number");
flag=1;  
break;  
}  
}  
if(flag==0)  
printf("Number is prime");  
getch();  
}   

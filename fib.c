#include<stdio.h>
int fib(int n)
{
int a = 0, b = 1, c, ,n,i;
if( n == 0)
return a;
for (i = 2; i <= n; i++)
{
c = a + b;
a = b;
b = c;
}
return b;
}
int main ()
{
printf(("enter the number");
scanf("%d",&n);
printf("%d", fib(n));
return 0;
}

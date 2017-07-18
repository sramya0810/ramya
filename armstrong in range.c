#include <stdio.h>
#include <math.h>
int main()
{
int n, last, digit, sum, i;
int start, end;
printf("Enter start: ");
scanf("%d", &start);
printf("Enter end: ");
scanf("%d", &end);
printf("Armstrong number between %d to %d are: \n", start, end);
for(i=start; i<=end; i++)
{
sum = 0;
n= i;
digits = (int) log10(n) + 1;
while(n > 0)
{
last = n % 10;
sum = sum + pow(last, digit);
n = n / 10;
}
if(i == sum)
{
printf("%d, ", i);
}
}
return 0;
}

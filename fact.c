#include <stdio.h>
void main()
{
int x, num, fact = 1;
printf("\nEnter a number");
scanf("%d", &num);
for (x = 1; x <= num; x++)
fact = fact * x;
printf("Factorial id = %d",fact);
}

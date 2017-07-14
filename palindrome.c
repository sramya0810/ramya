#include <stdio.h>
void main()
{
int num,rem, reverse = 0;
printf("Enter an integer \n");
scanf("%d", &num);
while (num > 0)
{
rem = num % 10;
reverse = reverse * 10 + rem;
num /= 10;
}
printf("Given number is = %d\n", num);
printf("Its reverse is  = %d\n", reverse);
if (num == reverse)
printf("Number is a palindrome \n");
else
printf("Number is not a palindrome \n");
}

#include <stdio.h>
int factorial(int);
int main()
{
    int n,r;
    printf("Enter a number to find Factorial: ");
    scanf("%d", &n);
    if (n< 0)
    {
        printf("Factorial of negative number not possible\n");
    }
    else
    {
        r= factorial(n);
        printf("The Factorial of %d is %d.\n", n, r);
    }
    return 0;
}
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return(n *factorial(n - 1));
    }
}

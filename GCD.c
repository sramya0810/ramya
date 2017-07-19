#include <stdio.h>
void main()
{
int a, b, c, d, t, gcd, lcm;
printf("Enter two integers\n");
scanf("%d%d", &a, &b);
c = a;
d = b;
while (d != 0) {
t = d;
d = c % d;
c = t;
}
gcd = c;
printf("Greatest common divisor of %d and %d = %d\n", a, b, gcd);
}

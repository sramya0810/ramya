#include <stdio.h>
void main()
{
int i, a,b;
printf("Print lower limit");
scanf(" %d",&a);
printf("enter upper limit");
scanf("%d",&b);
printf("All odd numbers from %d to %d are: \n", a,b);
for(i=a; i<=b; i++)
{
if(i%2!=0)
{
printf("%d\n", i);
}}
}

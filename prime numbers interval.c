#include<stdio.h>
void main()
{
int n,i,count,a,b;
printf("Enter a range: ");
scanf("%d",&a);
printf("Enter b range: ");
scanf("%d",&b);
for(n=a;n<=b;n++){
count = 0;
for(i=2;i<=n/2;i++){
if(n%i==0)
{
count++;
break;
}
}
if(count==0 && n!= 1)
printf("%d ",n);
}
}

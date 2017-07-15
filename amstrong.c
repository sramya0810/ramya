#include <stdio.h>
int main() {
int arms = 153; 
int n, rem, sum = 0;
n = arms;
while(n != 0) {
rem = n % 10;
sum = sum + (rem * rem * rem);
n = n / 10;
}
if(sum == arms) 
printf("%d is an armstrong number.", arms);
else 
printf("%d is not an armstrong number.", arms);
return 0;
}

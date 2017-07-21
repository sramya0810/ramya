#include<stdio.h>
#include<string.h>
void main()
{
char string[100];
printf("enter the string");
scanf("%c",&string);
printf("\nString before strrev( ) : %s",string);
printf("\nString after strrev( )  : %s",strrev(string));
}

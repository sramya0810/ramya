#include <stdio.h> 
int main()
{  
    char cha;
    printf("Enter alphabet\n");  
    scanf("%c", &cha);  
    if(isalpha(cha)) 
    {  
    printf("%c is an alphabet\n", cha);  
    else 
    printf("%c is not an alphabet\n", cha);  
    }
}

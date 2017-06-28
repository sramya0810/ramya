#include <stdio.h> 
#include <ctype.h> 
   
int main() {  
    char cha;
    
    printf("Enter a Character\n");  
    scanf("%c", &cha);  
       
    if(isalpha(cha)) {  
        printf("%c is an Alphabet\n", cha);  
    else 
        printf("%c is not an alphabet\n", cha);  
    }
   }

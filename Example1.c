#include<stdio.h>
int main(){
    char ch;
    printf("Enter any Character:");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Upper Case");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("Lower Case");
    }else{
        printf("Invalid Character in English Language");
    }
    return 0;
}
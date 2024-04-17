#include<stdio.h>

int main(){
    char ch = 'A';
    char *ptr = &ch;

    for(int i=1; i<=26; i++){
        printf("%c\n", *ptr);
        (*ptr)++;
    }
    return 0;
}
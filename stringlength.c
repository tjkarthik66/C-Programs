#include<stdio.h>

int printString(char str[]);
int countString(char str[]);

int main(){
    char name[50];

    printf("Enter your Name:");
    
    fgets(name, 50, stdin);

    printString(name);

    printf("Length of the string is = %d", countString(name));

    return 0;
}

int printString(char str[]){
    int i;
    for(i=0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }
}

int countString(char str[]){
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    return count-1;
}
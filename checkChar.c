#include<stdio.h>

void checkChar(char arr[], char ch);

int main(){
    char message[]="Peter Griffin";
    char ch='e';
    checkChar(message, ch);
}

void checkChar(char arr[], char ch){
    for(int i=0; arr[i]!='\0'; i++){
        if(arr[i]==ch){
            printf("Character is present");
            return;
        }
    }
    printf("Character not found");
}
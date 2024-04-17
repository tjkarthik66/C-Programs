#include<stdio.h>

int main(){
    char name[20];

    printf("Enter your Name:");

    fgets(name, 20, stdin);

    puts(name);

    return 0;
    
}
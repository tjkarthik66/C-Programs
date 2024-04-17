#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main(){
    char password[20];
    printf("Enter the Password:");
    scanf("%s", password);
    salting(password);
}

void salting(char password[]){
    char salt[]="9845";
    char newpassword[40];

    strcpy(newpassword, password);
    strcat(newpassword, salt);

    puts(newpassword);
}
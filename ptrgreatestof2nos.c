#include<stdio.h>

int great(int *a, int *b);

int main(){
    int a, b;
    printf("Enter the value of A:");
    scanf("%d", &a);
    printf("Enter the value of B:");
    scanf("%d", &b);

    great(&a,&b);
    return 0;
}

int great(int *a, int *b){
    if(*a > *b){
        printf("Value of A %d is greater", *a);
    }else{
        printf("Value of B %d is greater", *b);
    }
}
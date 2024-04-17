#include<stdio.h>

int main(){
    int a, b;
    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("Enter the first Number:");
    scanf("%d", ptr1);
    printf("Enter the Second Number:");
    scanf("%d", ptr2);
    
    if(*ptr1>*ptr2){
        printf("%d is greater than %d", *ptr1, *ptr2);
    }else{
        printf("%d is greater than %d", *ptr2, *ptr1);
    }
return 0;
}
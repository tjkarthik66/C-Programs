#include<stdio.h>

int main(){
    int a;
    int *ptr = &a;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);
    
    return 0;
}
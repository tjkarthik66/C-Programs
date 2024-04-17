#include<stdio.h>

int main(){
    int n, s=0, r;

    printf("Enter the value of N:");
    scanf("%d", &n);

    while(n>0){
        r = n%10;
        s = s+r;
        n = n/10;
    }

    printf("Sum = %d", s);

    return 0;
}
#include<stdio.h>

int fib(int n);

int main(){
    printf("%d\t", fib(10));
    return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    // int fibN1=fib(n-1);
    // int fibN2=fib(n-2);
    int fibN=fib(n-1)+fib(n-2);
    // printf("The fib of %d is %d\n", n, fibN);
    return fibN;
}
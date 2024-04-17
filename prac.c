#include<stdio.h>

void fib(int n);

int main() {
    int n;
    printf("Enter the value of N:");
    scanf("%d", &n);

    fib(n);
    
    return 0;
}

void fib(int n) {
    int a = 0, b = 1, c;
    if (n >= 1)
        printf("%d\t", a);
    if (n >= 2)
        printf("%d\t", b);

    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }
}

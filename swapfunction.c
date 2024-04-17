#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int x=10, y=20;
    printf("x=%d, y=%d\n",x,y);
    swap(x,y);
    _swap(&x,&y);
}

void swap(int a, int b){
    int c = a;
    a = b;
    b = c;
    printf("x=%d, y=%d\n", a,b);
}

void _swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
    printf("a=%d, b=%d\n", *a,*b);
}
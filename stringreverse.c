#include<stdio.h>

int reverse(char ch[], int n);

int main(){
    char ch[]="Peter";

    reverse(ch,3);

    printf("%s\n", ch);

    return 0;
}

int reverse(char ch[], int n){
    for(int i=0; i<n/2; i++){
        char temp = ch[i];
        ch[i]=ch[n-i-1];
        ch[n-i-1]=temp;
    }
}
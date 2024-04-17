#include<stdio.h>

int main(){
    int n,r,sum=0,c;
    printf("Enter any number:");
    scanf("%d", &n);

    c=n;

    while(n>0){
        r=n%10;
        sum=r+(sum*10);
        n=n/10;
    }

    if(c==sum){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}
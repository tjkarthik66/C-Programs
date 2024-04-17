#include<stdio.h>

int main(){
    int n, flag=0;
    printf("Enter the value of N:");
    scanf("%d", &n);

    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            flag=1;
            break;
        }
    }

    if(flag == 0){
        printf("Prime Number");
    }else{
        printf("Not a Prime Number");
    }
    return 0;
}
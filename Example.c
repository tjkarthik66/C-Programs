#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Enter any Number:");
    scanf("%d", &a);
    if(a%2==0){
        printf("The entered number %d is divisible by 2", a);
    }else{
        printf("The entered number %d is not divisible by 2", a);
    }
    return 0;
}
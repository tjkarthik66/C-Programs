#include<stdio.h>

int main(){
    int arr[5];

    for(int i=0; i<5; i++){
        printf("%d Index : ", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<5; i++){
        printf("%d is the Index of %d\n", i, arr[i]);
    }
    return 0;
}
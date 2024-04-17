#include<stdio.h>

int printNumber(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5 ,6 ,7 ,8};

    printNumber(arr, 8);

    return 0;
}

int printNumber(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}
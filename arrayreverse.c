#include<stdio.h>

int reverse(int arr[], int n);

int printArray1(int arr[], int n);

int printArray(int arr[], int n);

int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8};

    printf("Original Array: ");
    printArray1(arr, 8);
    printf("\n");
    reverse(arr, 8);
    
    printf("Reversed Array: ");
    printArray1(arr, 8);

    return 0;
}

int printArray1(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

int reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i]=secondVal;
        arr[n-i-1]=firstVal;
    }
}

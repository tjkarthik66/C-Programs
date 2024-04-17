#include<stdio.h>

int main(){
    int arr[] = {8, 9, 7, 5, 4, 6, 1, 2, 3};

    int length = sizeof(arr)/sizeof(arr[0]);

    //original array:
    printf("Original Array:\n");
    for(int i=0; i<length; i++){
        printf("%d\t", arr[i]);
    }

    for(int i=0; i<length; i++){
        for(int j=i+1; j<length; j++){
            if(arr[i]>arr[j]){
                int c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }

    //sorted array:Ascending Order:
    printf("\nAscending Order:\n");
    for(int i=0; i<length; i++){
        printf("%d\t", arr[i]);
    }

    for(int i=0; i<length; i++){
        for(int j=i+1; j<length; j++){
            if(arr[i]<arr[j]){
                int c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }

    //sorted array:Descending Order:
    printf("\nDescending Order:\n");
    for(int i=0; i<length; i++){
        printf("%d\t", arr[i]);
    }

    return 0;
}
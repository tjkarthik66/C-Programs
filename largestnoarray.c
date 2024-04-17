#include<stdio.h>

int main(){
    int arr[]={9, 2, 3, 4, 5, 6, 1};

    int length=sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];

    for(int i=0; i<length; i++){
        if(arr[i]>max)
            max=arr[i];
    }
    printf("Largest element is:%d\n", max);
    
    int min=arr[0];
    for(int i=0; i<length; i++){
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Smallest element is:%d", min);
    
    return 0;
}
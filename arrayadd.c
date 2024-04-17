#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int sum=0, product=1;

    int length=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<length; i++){
        sum+=arr[i];
    }
    printf("Sum of all elements in the array:%d", sum);

    printf("\n");

    for(int i=0; i<length; i++){
        product*=arr[i];
    }
    printf("Product of all the elements in the array:%d", product);
    return 0;
}
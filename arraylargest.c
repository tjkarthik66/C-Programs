#include<stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    int length = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];

    int min = arr[0];

    for(int i=0; i<length; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i=0; i<length; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("Largest Element:%d\n", max);

    printf("Smallest Element:%d\n", min);

return 0;    

}
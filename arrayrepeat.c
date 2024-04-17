#include<stdio.h>

int main(){
    int arr[10];

    int n, count=0;

    printf("Enter the number of elements to be inserted:");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    printf("Repeated elements are:%d", count);

    return 0;
}
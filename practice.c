// #include<stdio.h>

// int countOdd(int *arr, int n);

// int main(){
//     int arr[]={1, 2, 3, 4};
//     printf("%d", countOdd(arr, 4));

//     return 0;
// }

// int countOdd(int *arr, int n){
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i]%2 == 1){
//             count++;
//         }
//     }
//     return count;
// }

#include<stdio.h>

int printOdd(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,11};
    //printOdd(arr, 9);

    printf("%d", printOdd(arr, 11));
    return 0;
}

int printOdd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 == 1){
            printf("%d\n", arr[i]);
            count++;
        }
    }
    return count;
}
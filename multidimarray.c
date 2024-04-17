// #include<stdio.h>

// int main(){
//     int arr[2][2] = {{1,2}, {3,4}};

//     printf("%d\t", arr[0][0]);
//     printf("%d\t", arr[0][1]);
//     printf("%d\t", arr[1][0]);
//     printf("%d", arr[1][1]);

//     return 0;
// }

#include<stdio.h>

int main(){
    int marks[2][3];

    marks[0][0] = 99;
    marks[0][1] = 98;
    marks[0][2] = 96;

    marks[1][0] = 89;
    marks[1][1] = 88;
    marks[1][2] = 86;

    printf("%d\n", marks[0][2]);
    printf("%d\n", marks[1][2]);

    return 0;       
}
#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of Rows:");
    scanf("%d", &rows);

    for(int i=0; i<rows; i++){
        for(int space=0; space<rows-i; space++){
            printf(" ");
        }
        for(int j=0; j<2*i-1; j++){
            printf("%d", j+1);
        }
        printf("\n");
    }

    // for(int i=rows-1; i>=1; i--){
    //     for(int space=1; space<=(rows-i); space++){
    //         printf(" ");
    //     }
    //     for(int j=1; j<=2*i-1; j++){
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
    return 0;
}
#include<stdio.h>

void hot(int temp);
void cold(int temp);
void normal(int temp);

int main(){
    int temp;
    printf("Enter the Temperature:");
    scanf("%d", &temp);
    hot(temp);
    cold(temp);
    normal(temp);
    return 0;
}

void hot(int temp){
    if(temp>30){
        printf("HOT");
    }
    return;
}

void cold(int temp){
    if (temp<19){
        printf("COLD");
    }
    return;
}

void normal(int temp){
    if(temp>19 && temp<30){
        printf("NORMAL");
    }
    return;
}


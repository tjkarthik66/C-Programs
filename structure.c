#include<stdio.h>

typedef struct account{
    int accountNumber;
    char name[50];
}acc;

int main(){
    acc acc1 = {1234, "Karthik"};
    acc acc2 = {4312, "Jason"};
    acc acc3 = {5123, "Peter"};

    printf("Account Number:%d, Account Holder Name:%s", acc1.accountNumber, acc1.name);

    return 0;
}
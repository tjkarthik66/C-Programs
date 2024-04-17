#include<stdio.h>

struct address{
    int houseNo;
    int block;
    char city[20];
    char state[20];
};

void printAdd(struct address add);

int main(){
    struct address adds[5];
    printf("Enter the Address of Person 1:\n");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter the Address of Person 2:\n");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter the Address of Person 3:\n");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter the Address of Person 4:\n");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
}

void printAdd(struct address add){
    printf("Address:%d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
}
#include<stdio.h>

int countVowel(char arr[]);

int main(){
    char message[]="Karthik";
    printf("Number of vowels are:%d", countVowel(message));
}

int countVowel(char arr[]){
    int count=0;
    for(int i=0; arr[i]!='\0'; i++){
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
            count++;
        }
    }
    return count;
}
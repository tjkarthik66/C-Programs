#include<stdio.h>
#include<string.h>

void slice(char arr[], int n, int m);

int main(){
    char mess[]="HelloKarthik";
    slice(mess,3,6);
}

void slice(char arr[], int n, int m){
    char newstr[20];
    int j=0;
    for(int i=n; i<=m; i++, j++){
        newstr[j]=arr[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}

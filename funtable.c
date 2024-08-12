#include<stdio.h>

void printTable(int n);

int main(){
    int n;
    printf("Enter number: \n");
    scanf("%d",&n);
    printTable(n);    //Argument
    return 0;
}

void printTable(int n){     //Parameter 
    for(int i=1;i<=10;i++){
        int multiply=n*i;
        printf("%d \n",multiply);
    }
}
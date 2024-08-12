#include<stdio.h>

//Function Declaration
void printHello();
void printBye();

int main(){
    printHello();      //Function Call
    printBye();       //Function Call
    return 0;
}

//Function Definition
void printHello(){
    printf("Hello! \n");
}
void printBye(){
    printf("GoodBye! \n");
}
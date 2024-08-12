#include<stdio.h>

//Function Declaration
void printNamastee();
void printBonjour();

int main(){
    printf("Enter your Nationality(F for France & I for Indian): \n");
    char ch;
    scanf("%c",&ch);
    if(ch=='I'){
        printNamastee();    //Function Call
    }
    else if(ch=='F'){
        printBonjour();      //Function Call
    }
    else{
       printf("Invalid!!");
    }
    return 0;
}

//Function Definition
void printNamastee(){
    printf("Namaste! \n");
}
void printBonjour(){
    printf("Bonjour! \n");
}
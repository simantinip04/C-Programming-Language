#include<stdio.h>
# include <string.h>

void charCheck(char str[],char ch);

int main(){
    char str[]="simantini";
    charCheck(str,'a');
    return 0;
}

void charCheck(char str[],char ch){

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("YES, Char is present");
            return;
        }
    }
    printf("No, Char is not present");
}
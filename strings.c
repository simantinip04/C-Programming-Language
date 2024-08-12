#include<stdio.h>

void printString(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    } 
}

int main(){
    char f_name[]="SIMANTINI";
    char l_name[]="PATIL";
    printString(f_name);
    printf("\n");
    printString(l_name);
    return 0;
}
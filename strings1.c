#include<stdio.h>
# include <string.h>

// int countLen(char arr[]){
//     int count=0;
//     for(int i=0;arr[i]!='\0';i++){
//         count++;
//     }
//     return count-1; //-1 because it counts value of '\0'

// }
int main(){
    // char f_name[50];
    // scanf("%s ",f_name);
    // printf("Your name is: %s ",f_name);

    // char name[50];
    // fgets(name,50,stdin);
    // puts(name);

    // char *canChange = "Hello World";
    // puts(canChange);
    // canChange="Hello";
    // puts(canChange);

    // char cannotChange[]= "Hello World";
    // puts(cannotChange);
    // cannotChange []="Hello";
    // puts(cannotChange);

    // char name[100];
    // fgets(name,100,stdin);
    // printf("Length of String is : %d",countLen(name));

    // char name[]="Simantini";
    // printf("Length is :%lu ",strlen(name)); //It returns Unsigned long value

    // char oS[]="SEMS";
    // char nS[]="DYPCET";
    // strcpy(nS,oS);
    // puts(nS);
    // puts(oS);

    // char fS[]="Simantini";
    // char sS[]="Patil";
    // strcat(fS,sS);
    // puts(fS);

    char fS[]="Simantini";
    char sS[]="Patil";
    printf("%d",strcmp(fS,sS));
   
    return 0;
}
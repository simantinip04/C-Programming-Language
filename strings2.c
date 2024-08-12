#include<stdio.h>
# include <string.h>

void slice(char str[],int n, int m);

int main(){
    // char password[100];
    // char salt[]="ABC";
    // fgets(password,100,stdin);
    // password[strcspn(password, "\n")] = 0;
    // // strcat(password,salt);
    // printf("New Password is : %s",strcat(password,salt));
    char str[]="HelloWorld";
    // slice(str,3,6);


    return 0;
}

void slice(char str[],int n, int m){
    char newStr[100];
    int j=0;
    for(int i=n, j=0;i<=m;i++,j++){
        newStr[j]=str[i];
    }
    newStr[j]='\0';
    // printf("%s",newStr);    
    puts(newStr);
}
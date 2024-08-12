#include<stdio.h>
# include <string.h>

int vowelCount(char str[]);

int main(){
    char str[]="simantini";
    printf("The Vowel count is :%d",vowelCount(str));

}

int vowelCount(char str[]){
    int count=0;
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' ||str[i]=='u'){
            count++;
        }
    }
    return count;
}
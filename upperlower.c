#include<stdio.h>

int main(){
    char ch;
    printf("Enter Character:");
    scanf("%c", &ch);

    if(ch>='A'&& ch<='Z'){
        printf("Uppercase\n");
    }
    else if(ch>='a'&& ch<='z'){
        printf("Lowercase\n");
    }
    else{
        printf("Invalid Character\n");
    }
return 0;    
}
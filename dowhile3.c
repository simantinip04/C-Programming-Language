#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter number:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%7==0){    //multiple of 7
            break;
        }
    }while (1);
    printf("User entered a number multiple of 7");
    return 0;    
}
#include<stdio.h>

int main(){
    int n;
    do{
        printf("Enter number:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%2!=0){
            break;
        }
    }while (1);
    printf("User entered a odd number");
    return 0;    
}
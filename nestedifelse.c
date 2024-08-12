#include<stdio.h>
int main()
{
    int x; 
    printf("Enter number: ");
    scanf("%d", &x);

    if(x>=0){
        printf("Is Positive\n");
        if(x % 2==0){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
    }
    else{
        printf("Is Negative\n");
    }

return 0;
}
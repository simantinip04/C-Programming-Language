#include<stdio.h>
int main()
{
    //even->1
    //odd->0
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("%d \n", x % 2 == 0);
    return 0;
}
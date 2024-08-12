#include<stdio.h>
int main()
{
    printf("%d \n", 4>3 && 5>2);
    printf("%d \n", 4>6 && 5>2);
    printf("%d \n", 4>6 || 5>2);
    printf("%d \n", !(4>6));
    printf("%d \n", !((5>1) && (3>4)));
    return 0;
}
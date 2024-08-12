#include<stdio.h>
int main()
{
    int side;
    printf("Enter Side of Square:");
    scanf("%d",&side);
    printf("Area of Square is:%d",side*side);

    float _side;
    printf("Enter Side of Square:");
    scanf("%f",&_side);
    printf("Area of Square is:%f",_side*_side);
    return 0;
}
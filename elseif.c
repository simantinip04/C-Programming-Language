#include<stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age>=18)
    {
        printf("Is Adult\n");
    }
    else if (age>13 && age<=18)
    {
        printf("Is Teenager\n");
    }
    else
    {
        printf("Child\n");
    }
    return 0;
}
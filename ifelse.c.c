#include<stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age>18)
    {
        printf("Is Adult\n");
        printf("Can vote\n");
        printf("Can Drive\n");
    }
    else{
        printf("Is Not Adult\n");
        printf("Cannot vote\n");
        printf("Cannot Drive\n");
    }
    return 0;
}
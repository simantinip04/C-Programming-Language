#include<stdio.h>
int main()
{
    int x; 
    printf("Enter Marks: ");
    scanf("%d", &x);

    if(x>=90 && x<=100){
        printf("Grade is A+\n");
    }
    else if(x<90 && x>=70){
        printf("Grade is A\n");
    }
    else if(x<70 && x>=30){
        printf("Grade is B\n");
    }
    else{
        printf("Grade is C\n");
    }

return 0;
}
#include<stdio.h>

int main() {
    int x;
    printf("Enter Marks:");
    scanf("%d",&x);

    if(x<=30){
        printf("Student is Pass");
    }
    else{
        printf("Student is Fail");
    }
return 0;
}
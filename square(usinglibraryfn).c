#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    int square = pow(n,2);
    printf("Square of a number is: %d \n", square);
    return 0;
}
#include<stdio.h>

int main(){
    int n;
    printf("Enter a no:\n");
    scanf("%d",&n);
    // for(int i=1;i<=10;i++){
    //     int multiply=n*i;
    //     printf("%d \n",multiply);
    // }
    for(int i=10;i>=1;i--){
        int multiply=n*i;
        printf("%d \n",multiply);
    }

    return 0;
}
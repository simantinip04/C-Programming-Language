#include<stdio.h>

int sum(int n);
int fact(int x);

int main(){
    printf("Sum is %d \n",sum(10));
    printf("Factorial is %d\n",fact(5));
    return 0;
}

//recursive function for sum of n natural nos.
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);//sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}

//recursive function for factorial of nos.
int fact(int x){
    if(x==0){
        return 1;
    }
    int factNm1 = fact(x-1);//fact of 1 to n
    int factN = factNm1 * x;
    return factN;
}

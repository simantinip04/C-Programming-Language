// #include<stdio.h>

// int fib(int n);

// int main(){
//     printf("%d",fib(6));
//     return 0;
// }

// int fib(int n){
//     if(n==0 || n==1){
//         if(n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
//     }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN =  fibNm1+fibNm2;
//     printf(" Fib of %d is : %d \n", n, fibN);
//     return fibN;
// }

#include<stdio.h>

int main(){
    int n;
    printf("Enter value of n s.t n>2:");
    scanf("%d",&n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d \t", fib[i]);
    }
    return 0;
}
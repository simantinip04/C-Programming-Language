#include<stdio.h>
int main()
{
    int aadhar[5]; 

    //input
    int *ptr = &aadhar[0];
    for(int i=0;i<5;i++){
        printf("%d index : ",i);
        scanf("%d \n",&aadhar[i]);
    }

    //output
    for(int i=0;i<5;i++){
        printf("%d index : %d \n",i,aadhar[i]);
        // scanf("%d \n",(ptr+i));
    }



    return 0;
}
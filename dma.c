#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));
    printf("Enter numbers(5):");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    
    ptr=realloc(ptr,8);
    printf("Enter numbers(8):");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }
    //Print
    for(int i=0;i<8;i++){
        printf("Number %d is %d\n",i,ptr[i]);
    }

    // printf("%d\n",sizeof(int));
    // printf("%d\n",sizeof(float));
    // printf("%d\n",sizeof(char));
    // int *ptr;
    // ptr=(int*)malloc(5*sizeof(int));

    // ptr[0]=1;
    // ptr[1]=3;
    // ptr[2]=5;
    // ptr[3]=7;
    // ptr[4]=9;

    // for(int i=0;i<5;i++){
    //     printf("%d\n",ptr[i]);
    // }

    // float *ptr;
    // ptr=(float*)calloc(5,sizeof(float));

    // for(int i=0;i<5;i++){
    //     printf("%f\n",ptr[i]);
    // }



    return 0;
}
#include<stdio.h>
int main()
{
    // int age = 22;
    // int *ptr = &age;
    // ptr++;
    // printf("ptr = %u\n",ptr);
    // ptr++;
    // printf("ptr = %u\n",ptr);
    // ptr--;
    // printf("ptr = %u\n",ptr);
    // ptr--;
    // printf("ptr = %u\n",ptr);

    // float price = 100;
    // float *ptr = & price;
    // ptr++;
    // printf("ptr = %u\n",ptr);
    // ptr++;
    // printf("ptr = %u\n",ptr);
    // ptr--;
    // printf("ptr = %u\n",ptr);
    // ptr--;
    // printf("ptr = %u\n",ptr);


    // char star = '*';
    // char *ptr = &star;
    // ptr++;
    // printf("ptr = %u\n",ptr);
    // ptr--;
    // printf("ptr = %u\n",ptr);
    // ptr--;
    // printf("ptr = %u\n",ptr);

    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %u \nDifference = %u\n",ptr, _ptr,ptr-_ptr);
    //_ptr=&age;
    printf("Comparison = %u\n",ptr==_ptr);

    return 0;
}
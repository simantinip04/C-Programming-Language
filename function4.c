#include<stdio.h>

int percentage(int science, int maths, int sanskrit);

int main(){
    percentage(98,95,99);
    printf("Percentage is : %d", percentage(98,95,99));
    return 0;
}

int percentage(int science, int maths, int sanskrit){
    return ((science + maths + sanskrit)/3);
}
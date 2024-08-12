#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll_no;
    float cgpa;
};

int main(){
    struct student ECE[100];
    ECE->roll_no=123;
    ECE->cgpa=9.6;
    
    printf("ECE Student ID_123 roll no is: %d\n",ECE->roll_no);
    printf("ECE Student ID_123 CGPA is: %f \n",ECE->cgpa);
    return 0;
}

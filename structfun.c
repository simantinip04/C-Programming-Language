#include<stdio.h>
#include<string.h>

typedef struct student{
    char name[100];
    int roll_no;
    float cgpa;
} stu;

typedef struct computerenggstudent{
    char name[100];
    int roll_no;
    float cgpa;   
} coe;

// void studentInfo(struct student s1);

int main(){
    // struct student s1={"Simantini",23,9.4};
    // studentInfo(s1);

    coe s1;
    s1.roll_no=23;
    s1.cgpa=9.4;
    strcpy(s1.name,"Simantini");
    printf("Student Name is:%s\n",s1.name);
    printf("Student RollNo is:%d\n",s1.roll_no);
    printf("Student CGPA is:%f\n",s1.cgpa);
    return 0;
}

// void studentInfo(struct student s1){
//     printf("Student Information\n");
//     printf("Student Name is:%s\n",s1.name);
//     printf("Student RollNo is:%d\n",s1.roll_no);
//     printf("Student CGPA is:%f\n",s1.cgpa);
// }

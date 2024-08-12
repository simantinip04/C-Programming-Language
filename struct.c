#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int roll_no;
    float cgpa;
};

int main(){
    struct student s1;
    // s1.name="Simantini";
    strcpy(s1.name,"Simantini Patil");
    s1.roll_no=23;
    s1.cgpa=9.4;

    printf("Student Name is:%s\n",s1.name);
    printf("Student RollNo is:%d\n",s1.roll_no);
    printf("Student CGPA is:%f\n",s1.cgpa);

    struct student s2;
    // s1.name="Simantini";
    strcpy(s2.name,"Sayalee Patil");
    s2.roll_no=24;
    s2.cgpa=9.3;

    printf("Student Name is:%s\n",s2.name);
    printf("Student RollNo is:%d\n",s2.roll_no);
    printf("Student CGPA is:%f\n",s2.cgpa);

    struct student s3;
    // s1.name="Simantini";
    strcpy(s3.name,"Karuna Nikam");
    s3.roll_no=25;
    s3.cgpa=9.5;

    printf("Student Name is:%s\n",s3.name);
    printf("Student RollNo is:%d\n",s3.roll_no);
    printf("Student CGPA is:%f\n",s3.cgpa);
    return 0;
}
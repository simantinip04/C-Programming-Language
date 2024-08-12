#include<stdio.h>
#include<string.h>

typedef struct address{
    int houseno;
    int blockno;
    char city[100];
    char state[100];
} add;

int main(){
    add s1;
    s1.houseno=01;
    s1.blockno=5;
    strcpy(s1.city,"Satara");
    strcpy(s1.state,"Maharashtra");
    printf("Person1 Address is:%d %d %s %s\n",s1.houseno,s1.blockno,s1.city,s1.state);

    add s2;
    s2.houseno=02;
    s2.blockno=6;
    strcpy(s2.city,"Sangli");
    strcpy(s2.state,"Maharashtra");
    printf("Person2 Address is:%d %d %s %s\n",s2.houseno,s2.blockno,s2.city,s2.state);

    add s3;
    s3.houseno=03;
    s3.blockno=7;
    strcpy(s3.city,"Kolhapur");
    strcpy(s3.state,"Maharashtra");
    printf("Person3 Address is:%d %d %s %s\n",s3.houseno,s3.blockno,s3.city,s3.state);

    add s4;
    s4.houseno=04;
    s4.blockno=8;
    strcpy(s4.city,"Pune");
    strcpy(s4.state,"Maharashtra");
    printf("Person4 Address is:%d %d %s %s\n",s4.houseno,s4.blockno,s4.city,s4.state);

    add s5;
    s5.houseno=05;
    s5.blockno=9;
    strcpy(s5.city,"Satara");
    strcpy(s5.state,"Maharashtra");
    printf("Person5 Address is:%d %d %s %s\n",s5.houseno,s5.blockno,s5.city,s5.state);
    
    return 0;
}
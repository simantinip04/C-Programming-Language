#include<stdio.h>
#include<string.h>

// struct complex{
//     int real;
//     int img;
// };

typedef struct BankAccount{
    int Acc_no;
    char Accholder_name[100];
}acc;

int main(){
    // struct complex number1={5,8};
    // struct complex *ptr = &number1;
    // printf("Real Part of Complex Number is: %d\n",ptr->real);
    // printf("Imaginary Part of Complex Number is: %d \n",ptr->img);

    acc acc1 = {6504,"Simantini"};
    // strcpy(acc.Accholder_name,"Simantini");
    printf("Name of Account Holder is:%s\n",acc1.Accholder_name);
    printf("Account Number is:%d",acc1.Acc_no);
    return 0;
}
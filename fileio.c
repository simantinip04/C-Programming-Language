#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","r");
    char ch;
    ch = fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    // fprintf(fptr,"%c","M");
    // fprintf(fptr,"%c","A");
    // fprintf(fptr,"%c","N");
    // fprintf(fptr,"%c","G");
    // fprintf(fptr,"%c","O");
    // fclose(fptr);

    // fptr = fopen("Test.txt","r");
    // char ch;
    // while((ch=fgetc(fptr))!=EOF){
    //     putchar(ch);
    // }
    // putchar('\n');
    // fclose(fptr);
    // fptr = fopen("Test.txt","r");
    // char ch;
    // fscanf(fptr,"%c",&ch);
    // printf("Data is:%c\n",ch);
    // fscanf(fptr,"%c\n",&ch);
    // printf("Data is:%c\n",ch);
    // fscanf(fptr,"%c\n",&ch);
    // printf("Data is:%c\n",ch);
    // fscanf(fptr,"%c\n",&ch);
    // printf("Data is:%c\n",ch);
    // fscanf(fptr,"%c\n",&ch);
    // printf("Data is:%c\n",ch);
    // if (fptr==NULL){
    //     printf("File doesn't exist\n");
    // }else{
    //     fclose(fptr);
    // }
    return 0;
}
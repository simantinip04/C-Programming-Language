#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        if(i==3){  //skip
            continue;
        }
        printf("%d\n",i);
    }
    for(int j=1;j<=10;j++){
        if(j==6){  //skip
            continue;
        }
        printf("%d\n",j);
    }
    for(int k=5;k<=50;k++){
        if(k%2==0){  //skip
            continue;
        }
        printf("%d\n",k);
    }
    return 0;
}
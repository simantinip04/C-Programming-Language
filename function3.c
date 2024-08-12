//Program for Area of Square, Rectangle & Circle using functions.
#include<stdio.h>

float aosquare(float side);
float aocircle(float radius); 
float aorect(float l, float b);
int main(){
    float side=5.0;
    float radius=5.0;
    float l= 5.0;
    float b=10.0;
    printf("Area of Square is: %f \n", aosquare(side));
    printf("Area of Circle is: %f \n", aocircle(radius));
    printf("Area of Rectangle is: %f \n", aorect(l,b));
    return 0;
}

float aosquare(float side){
   return side*side;
}

float aocircle(float radius){
   return 3.14*radius*radius;
}

float aorect(float l, float b){
    return l*b;
}
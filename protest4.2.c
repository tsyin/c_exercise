#include<stdio.h>

int main(void){
    const float PI = 3.1415926;
    float area,circum,radius;
    printf("What is the radius of the pizza?\n");
    scanf("%f",&radius);
    area = PI*radius*radius;
    circum = 2.0*PI*radius;
    printf("your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f,area = %1.2f\n",circum,area);
    return 0;

}
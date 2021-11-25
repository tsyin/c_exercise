#include<stdio.h>

int main(void){
    printf("Enter a floating-point value:");
    float num_f;
    scanf("%f",&num_f);
    printf("fixed-point　notation:%f\n",num_f);
    printf("exponential　notation:%e\n",num_f);
    printf("p　notation:%a\n",num_f);
    return 0;
}
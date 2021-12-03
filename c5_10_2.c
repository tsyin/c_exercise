#include<stdio.h>


int main(void){
    int multpl1,multpl2;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&multpl2);
    while(multpl2 > 0)
    {   
        printf("Now enter the first operand: ");
        scanf("%d",&multpl1);
        printf("%d %% %d is %d \n",multpl1,multpl2,multpl1%multpl2);
        printf("Enter next number for  second operand (<= 0 to quit):");
        scanf("%d",&multpl2);
    }
    printf("DONE!");
    return 0;
}
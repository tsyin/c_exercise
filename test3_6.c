#include<stdio.h>

int main(void){
    float weight_aw = 3.0e-23;
    int weight_aq = 950;
    int num_q;
    double num_w;
    printf("Enter water kuatuo num:\n");
    scanf("%d",&num_q);
    num_w = num_q * weight_aq /weight_aw;
    printf("%d kuatuo water num is %f\n",num_q,num_w);
    return 0;
}
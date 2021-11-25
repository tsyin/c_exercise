#include<stdio.h>
#include<limits.h>

int main(){
    int num = 2147483647;
    num ++;
    printf("%d\n",num);

    float ss = 3.1415926234e-30;
    //ss *= 100;
    //ss = ss/100;
    printf("%e\n",ss);


    return 0;
}
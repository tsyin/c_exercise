//带参数的函数实现强制类型转换
//打印指定数量的#
#include<stdio.h>

void pound(int);
int main(void){
    int times = 5;
    char ch = '!';
    float f = 6.0;
    pound(times);
    pound(ch);
    pound(f);
    return 0;
}

void pound(int n){
    printf("%d",n);
    while (n-->0)
        printf("#");
    printf("\n");
}
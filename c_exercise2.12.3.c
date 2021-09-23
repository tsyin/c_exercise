#include<stdio.h>
//3.编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考虑闰年的问题。
int main(void)
{
    int years,days;
    scanf("%d",&years);
    days = years * 365;
    printf("you are %d years old and you are bron %d days",years,days);
}
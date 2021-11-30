#include<stdio.h>
#define SQUARES 64
int main(void){
    const   double CROP = 2.0E16;
    double current,total;
    int count = 1;
    printf("%14s%14s%14s\n","square","grains","total");
    total = current =1;
    printf("%14d%12.2e%12.2e%12.2e\n",count,current,total,total/CROP);
}
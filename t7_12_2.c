#include<stdio.h>

int main(){
    int arr[100];
    int arrji[100];
    int arr_long = 0;
    int arrji_long = 0;
    int sumji = 0;
    int num = 0;
    scanf("%d",&num);
    while(num != 0){
        arr[arr_long] = num;
        arr_long ++;
        if(num%2 != 0){
            arrji[arrji_long] = num;
            arrji_long ++;
        }
        scanf("%d",&num);
    }

}
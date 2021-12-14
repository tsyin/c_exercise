/*多重计费
下面是某电力公司的电费清单，单位是千瓦时（kWh）：
首 360kWh:　　　　 $0.13230/kWh
续 108kWh:　　　　 $0.15040/kWh
续 252kWh:　　　　 $0.30025/kWh
超过 720kWh:　　　 $0.34025/kWh
*/
#include<stdio.h>
#define STEP1 360
#define STEP2 468
#define STEP3 720

#define PRICE1 0.13230
#define PRICE2 0.15040
#define PRICE3 0.30025
#define PRICE4 0.34025

int main(void){
    double kwh;
    double bills;
    while(scanf("%lf",&kwh) == 1){
        if(kwh <= STEP1)
            bills = kwh*PRICE1;
        else if(kwh <= STEP2)
            bills = (kwh-STEP1)*PRICE2 + STEP1*PRICE1;
        else if(kwh <= STEP3)
            bills = (kwh -STEP2)*PRICE3 +(STEP2-STEP1)*PRICE2 + STEP1*PRICE1;
        else
            bills = (kwh -STEP3)*PRICE4 +(STEP3-STEP2)*PRICE3+(STEP2-STEP1)*PRICE2 + STEP1*PRICE1;
        printf(" your bills is %10.2f\n",bills);
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
#define DENSITY 62.4

int main(){
    float weight,volume;
    int size,letters;
    char name[40];
    printf("Hi,wath's your first name?\n");
    scanf("%s",name);
    printf("%s,what's your weight in pounds?\n");
    scanf("%f",&weight);
    size =sizeof(name);
    letters = strlen(name);
    volume = weight/DENSITY;
    printf("well,%s,your volume is %2.2f cubic feet.\n",name,volume);
    printf("your name has %d letters",letters);
    printf("and we have %d bytes to store it",size);
    return 0;

}
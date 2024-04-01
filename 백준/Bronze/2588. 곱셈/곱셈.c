#include<stdio.h>

int main(void){
    int a,b;
    int line3,line4,line5,line6;
    scanf("%d %d", &a, &b);
    line3 = b%10*a;
    line4 = (b%100)/10*a;
    line5 = (b/100)*a;
    line6 = a*b;
    
    printf("%d\n",line3);
    printf("%d\n",line4);
    printf("%d\n",line5);
    printf("%d",line6);
}
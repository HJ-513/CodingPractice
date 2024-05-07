#include<stdio.h>

int main(void){
    int a,i,idx,max;
    
    max = -1;
    idx;
    
    for(i=1;i<10;i++){
        scanf("%d", &a);
        if(max<a){
            max = a;
            idx = i;
        }
    }
    
    printf("%d\n%d", max, idx);
    
}
#include <stdio.h>

int main(void){
    int sum,n,price,cnt;
    int i;
    
    scanf("%d %d", &sum,&n);
    
    for(i=0; i<n; i++){
        scanf("%d %d", &price, &cnt);
        sum -= price*cnt;
    }
    
    if(sum==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
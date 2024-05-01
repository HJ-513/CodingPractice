#include <stdio.h>

int main(void){
    int n,i,num;
    int cnt = 0;
    
    scanf("%d", &n);
    
    int l[n];
    for(i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    
    scanf("%d",&num);
    
    for(i=0;i<n;i++){
        if(num==l[i]){
            cnt++;
        }
    }
    printf("%d", cnt);
}
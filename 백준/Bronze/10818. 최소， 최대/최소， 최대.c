#include<stdio.h>

int main(void){
    int n,i,min,max;
    
    scanf("%d", &n);
    
    int a[n];
    
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];
    
    for(i=0;i<n;i++){
        if(min>a[i]) min = a[i];
        else if(max < a[i]) max = a[i];
    }
    
    printf("%d %d", min, max);


}
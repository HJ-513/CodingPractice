#include<stdio.h>
int main(void){

    int n,m,i,j,k,temp;
    
    scanf("%d %d", &n, &m);
    
	int basket[n];
    
    for(k=0;k<n;k++){
    	basket[k]=k+1;
	}
    
    for(k=0;k<m;k++){
        scanf("%d %d", &i, &j);
        i--; 
        j--;
        temp = basket[i];
        basket[i] = basket[j];
        basket[j] = temp;
    }
    
    for(k=0;k<n;k++){
        printf("%d ", basket[k]);
    }
}
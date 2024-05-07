#include<stdio.h>

int main(void){
	int n,m,i,j,k,l,idx;
	
	scanf("%d %d", &n, &m);
	
	int a[n];
	
	for(idx=0;idx<n;idx++){
		a[idx]=0;
	} 
	
	for(l=0;l<m;l++){
		scanf("%d %d %d", &i, &j, &k);
		
		for(idx=i-1;idx<j;idx++){
			a[idx] = k;
		}
	}
	
	for(idx=0;idx<n;idx++){
		printf("%d ", a[idx]);
	}
}

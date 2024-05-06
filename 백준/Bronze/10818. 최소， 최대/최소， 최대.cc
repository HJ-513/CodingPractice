#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int A[N];
	int min,max;
	
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
		if(i==0) min=A[i],max=A[i];
	}
	for(int i=0;i<N;i++){
		if(A[i]<min) min=A[i];
		if(A[i]>max) max=A[i];
	}
	printf("%d %d",min,max);
}
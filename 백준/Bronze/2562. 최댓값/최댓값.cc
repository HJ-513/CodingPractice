#include<stdio.h>
int main(){
	int A[9];
	int max,count=0;
	
	for(int i=0;i<9;i++){
		scanf("%d",&A[i]);
		if(i==0) max=A[i];
		if(A[i]>=max){
			max=A[i];
			count=i+1;
		}
	}
	printf("%d\n%d",max,count);
}
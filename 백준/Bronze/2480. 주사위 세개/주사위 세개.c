#include <stdio.h>

int same_num(int a, int b, int c){
	int same_num;
	
	if(a==b) same_num = a;
	else if(b==c) same_num = b;
	else same_num = c;
	
	return same_num;
}

int highest_num(int a, int b, int c){
	int max;
	if(a >= b){
		max = a;
	}
	else{
		max = b;
	}
	if(c >= max){
		max = c;
	}
	
	return max;
}

int main(void){
	int a,b,c;
	int reward,dice;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a+b+c==a*3){
		reward = a * 1000 + 10000;
	}
	else if(a!=b && a!=c && b!=c){
		dice = highest_num(a,b,c);
		reward = dice * 100;
	}
	else{
		dice = same_num(a,b,c);
		reward = 1000 + dice * 100;
	}
	
	printf("%d",reward);
}
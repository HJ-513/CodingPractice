#include<iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio;
    cin.tie(0);
    
	int n,m,i,j,k,l,idx;
	
	cin >> n >> m;
	
	int a[n];
	
	for(idx=0;idx<n;idx++){
		a[idx]=0;
	} 
	
	for(l=0;l<m;l++){
		cin >> i >> j >> k;
		
		for(idx=i-1;idx<j;idx++){
			a[idx] = k;
		}
	}
	
	for(idx=0;idx<n;idx++){
		cout << a[idx] << " ";
	}
}

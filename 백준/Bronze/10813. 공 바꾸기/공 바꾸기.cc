#include<iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio;
    cin.tie(0);
    int n,m,i,j,k,temp;
    
    cin >> n >> m;
    
	int basket[n];
    
    for(k=0;k<n;k++){
    	basket[k]=k+1;
	}
    
    for(k=0;k<m;k++){
        cin >> i >> j;
        i--; 
        j--;
        temp = basket[i];
        basket[i] = basket[j];
        basket[j] = temp;
    }
    
    for(k=0;k<n;k++){
        cout << basket[k] << " ";
    }
}
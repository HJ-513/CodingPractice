#include <iostream>
using namespace std;

int main(void){
    int n,a,b,i;
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    
    for(i=0;i<n;i++){
        cin >> a >> b;
        cout << a+b << "\n";
    }
}
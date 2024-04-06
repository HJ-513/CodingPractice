#include<stdio.h>
main(){
    int H,M;
    scanf("%d %d", &H, &M);
    M = (H*60)+M;
    if (M<45){
        M += (60*24);    
    }
    M -=45;
    H = M/60;
    M %= 60;
    printf("%d %d", H, M);
}
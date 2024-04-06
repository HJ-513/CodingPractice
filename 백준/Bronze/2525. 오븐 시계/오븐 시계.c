#include <stdio.h>

int main(){
    int H,M,C;
    scanf("%d %d %d", &H, &M, &C);
    M += C;
    H += (M/60);
    M %= 60;
    H %= 24;
    printf("%d %d", H, M);
}

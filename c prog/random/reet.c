#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int d1=n/1000;
    int d2=(n/100)-(d1*10);
    int d3=(n/10)-(d1*100)-(d2*10);
    int d4=n-(d1*1000)-(d2*100)-(d3*10);
    printf("%d %d %d %d",d1,d2,d3,d4);
} 

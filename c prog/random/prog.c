#include <stdio.h>
int main(){
    int n=9;
    int i=1;
    float sum=0;
    while(i<=n){
        float x=1.0/i;
        sum=sum+x;
        i++;    
        }
    printf("sum is %f",sum);
}
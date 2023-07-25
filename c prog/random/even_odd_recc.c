#include <stdio.h>
int sum=0;
int func_(int a,int n){
    sum=sum+a;
    if(a<n){
        func_(a+2,n);
    }
    return sum;
}
int main()
{   int a=0;
    int n=10;
printf("%d",func_(a,n));
    return 0;
}
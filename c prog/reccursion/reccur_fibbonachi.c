#include <stdio.h>

int main(){

int n=5;
printf("the fibb of nth term is: %d",fib(n));

return 0;
}

int fib(int n){
     
if(n==0){
    return 0;
}

if(n==1){
    return 1;
}
    int fibnM1=fib(n-1);
    int fibnM2=fib(n-2);
    int fib1= fibnM1+fibnM2;

    return fib1;
}
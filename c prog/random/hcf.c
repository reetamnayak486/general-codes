#include<stdio.h>

int main(){

int x1,a,x2;
x1=32;
x2=24;


int i=1;

while(i<=x2 && i<=x1){

if(x1%i==0 && x2%i==0){
a=i;
}

i++;

}printf("%d", a);

return 0;
}
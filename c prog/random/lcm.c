#include<stdio.h>


int main2(){

int x1,a,x2;
x1=32;
x2=24;


int i=32;

while(i>=x2 && i>=x1){

if(i%x1==0 && i%x2==0){
break;
}

i++;

}printf("%d", i);

return 0;
}
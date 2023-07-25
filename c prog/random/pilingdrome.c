#include<stdio.h>

int main(){
   int a=675576;
   int q= a/100000;
   int w= ((a/10000)-(q*10));
   int e= ((a/1000)-(q*100)-(w*10));
   int r=((a/100)-(q*1000)-(w*100)-(e*10));
   int t=((a/10)-(q*10000)-(w*1000)-(e*100)-(r*10));
   int y=((a-(q*100000)-(w*10000)-(e*1000)-(r*100)-(t*10)));

   if(q==y && w==t && e==r){
    printf("the no. is plingdrome");
   }


   return 0;
}
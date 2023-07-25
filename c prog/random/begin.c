#include <stdio.h>
 void table(int n,int table1){
   int i;
   for(i=1;i<=10;i++){
    table1=n*i;
     printf("%d",table1); 
   } 
 }

 void main(){
   int n;
  int table1=1;
   scanf("%d",&n);

   table(n,table1);
    

 }
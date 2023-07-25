#include <stdio.h>
#include <math.h>
int main(){

    int i,limit;
    float sum,t,x;

printf("enter the angle:\n");
scanf("%f  %d",&x ,&limit);


x=x*(3.14/180);// angle being converted to radian
   
     t=x;//(for cosx) t=x;
      sum=x;// sum=1;

    for(i=1;i<=(limit-1);i++){ 
    
    t=t*(((-1)*(pow(x,2)))/(2*i+1)*(2*i));// t=t*(((-1)*(pow(x,2)))/(2*i-1)*(2*i));
    sum=sum+t;


    }

    printf("%f",sum);

}

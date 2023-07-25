#include <stdio.h>
#include <math.h>
int main(){

    int i,;
    float sum,t,x;

printf("enter the angle:\n");
scanf("%f",&x);


x=x*(3.14/180);// angle being converted to radian
   
     t=x;
      sum=x;

    for(i=1;;i++){ 
    
    t=t*(((-1)*(pow(x,2)))/(2*i+1)*(2*i));
    sum=sum+t;

    if(t>0){

        t1=t;
    }

    else if(t<0){

        t1=-t;
    }

    if(t1<=0.0001){
        break;
    }


    }

    printf("%f",sum);

}

#include <stdio.h>
int func(int num1,int num2){
      multiple=multiple+num1;
      if(multiple%num1==0 && multiple%num2==0){
        return multiple;
      }
      else{
        func(num1,num2);
      }
      
}
int main()
{
    int a=3;
    int b=6;
    if(a>b){
        func(a,b);
    }
    else{
        func(b,a);
    }
printf();
    return 0;
}
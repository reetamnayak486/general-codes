// almost same code is applied for sum of digits and palingdrome no.s
#include <stdio.h>
#include <math.h>
int count=0;
int ld=0;
int rev=0;
int a=0;
int func_(int num,int count){
    a=count;
    ld=num%10;
    rev=rev+ld*pow(10,count);
    if(a>=0){
        func_(num/10,--count);
        a--;
    }
    return rev;
}
int main()
{
    int num=1234;
    int num1=num;
    while(num1!=0){
        num1=num1/10;
        count++;
    }
    // printf("%d",count);
printf("%d",func_(num,count-1));
    return 0;
}
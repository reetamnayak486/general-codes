#include <stdio.h>
#include <math.h>
int main()
{ int length=0,a=0,sum=0,sum_=0,num=0;
    int bin=11001;int arr[50];
    while(bin!=0){
        bin= bin/10;
         length++;
    } 
    printf("%d",length);
    // int trip_=lenght/3;
    for(int i=1;i<=length/3;i++){
            int v=bin;
        for(int j=2;j>=0;j--){
            arr[j]=v%10;
            v=v/10;
        }
        forprintf("%d",)
    //     for(int k=2;k>=0;k--){
    //         sum=arr[k]*pow(2,k);             //part by part run karke dekh 
    //     }
    //     num=num+sum*pow(10,a);
    //     a++;
    //     bin=bin/1000;
    // }int b=0;
    // while(bin!=0){

    //     sum_=(bin%10)*pow(2,b);
    //     b++;
    // }
    // num=num+sum*pow(10,a);

    // printf("%d",num);
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{  int rem[10];int f_arr[30];
   int bin_num=61,count=0, num=0,f_num=0,a=0, i=0,e=0;
   long bin1 = bin_num;
    while (bin1 != 0)
    {

        bin1 = bin1 / 10;
        count++;
    }
    //printf("%d",count);
   while(bin_num!=0){
    a=bin_num%10;
    printf("%d\n",a);
    while(a!=0){
        rem[i]=a%2;
        a=a/2;
        i++;
    }
    if(i==1){
        rem[1]=0;
        rem[2]=0;
    }
    else if(i==2){
        rem[2]=0;
    }
   //printf("%d",i);
//    for(int k=0;k<count;k++){
//     for(int j=0;j<i-1;j++){
//         num=num+rem[j]*pow(10,j);
//     }
//    f_num=f_num+num*pow(100,k);
//    } 
// for(int x=0;x<3;x++){
//    printf("%d",rem[x]);
// }
     for(int k=0;k<3;k++){
        f_arr[e]=rem[k];
        e++;
     }

 
   bin_num=bin_num/10;
   }
 //printf("%d",f_arr[1]);
for(int q=0;q<count*3;q++){
    printf("%d",f_arr[q]);
 }
    return 0;
}
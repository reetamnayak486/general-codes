#include <stdio.h>
int bin_prod(int bin1,int bin2){
    int sum[20];
    int rem=0;int i=0;
    int prod=0;

     while (bin1 != 0 || bin2 != 0)
    {
        sum[i++] = (bin1 % 10 + bin2 % 10 + rem) % 2;
        rem = (bin1 % 10 + bin2 % 10 + rem) / 2;
        bin1 = bin1 / 10;
        bin2 = bin2 / 10;
    }

    if (rem != 0)
    {
        sum[i++] = rem;
    }
    --i;

    for(int j=i;j>=0;j--){
         prod=prod*10 + sum[j];
    }
    // //int i=2;
    // while (i >= 0) {
    //     prod = prod * 10 + sum[i];
    //     i = i - 1;
    // }
    return prod;
}
int main()
{
    long bin1=11;
    long bin2=10; 
    int prod=0;
        int digit=0;
        int fac=1;

    while (bin2!=0)
    {
         digit=bin2%10;
         if(digit==1){
            bin1=bin1*fac;
            prod=bin_prod(bin1,prod);
         }
         else{
            bin1=bin1*fac;
         }

         bin2=bin2/10;
         fac=10;
    }
    
printf("%d",prod);
    return 0;
}
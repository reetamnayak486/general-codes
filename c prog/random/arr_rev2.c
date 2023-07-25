#include <stdio.h>
int main()
{
    int a[]={9,0,123,7};
    int rev_arr[4];
    int i,j;
    for(i=0;i<=3;i++)
    {
         rev_arr[i]=a[3-i];//in place of 3 there can be any other no.
    }
     for(j=0;j<=3;j++)
     {
        printf("%d  ",rev_arr[j]);
     }
    return 0;
}
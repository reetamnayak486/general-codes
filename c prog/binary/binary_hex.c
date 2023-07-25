#include <stdio.h>
#include <math.h>
int main()
{   int i=0;char sum_[10];
    long bin = 11110111, count = 0;
    long bin1 = bin;
    // int num = 0;
    while (bin1 != 0)
    {

        bin1 = bin1 / 10;
        count++;
    }
     //printf("%d\n",count);
    int a = 0;int arr[5];
    for ( i = 0; i < count/4; i++)
    {
        
        for (int w = 3; w >= 0; w--)
        {
            arr[w] = bin % 10;

            bin = bin / 10;
        }
        // printf("%d\n",bin);
         
        //         for(int k=0;k<=3;k++){
        //      printf("%d",arr[k]);
        //  }
        //  printf("\n");

        int x = 0;
        int sum = 0;
        for (int j = 3; j >= 0; j--)
        {
            sum = sum + arr[j] * pow(2, x);
            x++;
        }
            //printf("%d\n",sum);
            if(sum<=9){
                sum_[i]=57+sum-9;
            }
            else{
                sum_[i]=70+sum-15;
            }
    //     // num = num + sum * pow(10, a);
    //     // a++;
     //bin=bin/10000;
     }
     //printf("%d\n",bin);
    int sum1 = 0;
    int y = 0;
    if(count%4!=0){
    while (bin != 0)
    {
        sum1 = sum1 + (bin % 10) * pow(2, y);
        y++;
        bin = bin / 10;
    sum_[count/4]=57+sum1-9;
    }}
    // // sum_
      for(int c=2;c>=0;c--){
        
     printf("%c", sum_[c]);
     }
//printf("%d",count);
    return 0;
}

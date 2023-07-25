#include <stdio.h>
#include <math.h>
int main()
{
    int bin = 1010101, count = 0;
    int bin1 = bin;
    int num = 0;
    while (bin1 != 0)
    {

        bin1 = bin1 / 10;
        count++;
    }
    // printf("%d",count);
    int a = 0;
    for (int i = 0; i < count / 3; i++)
    {
        int arr[5];
        for (int w = 2; w >= 0; w--)
        {
            arr[w] = bin % 10;

            bin = bin / 10;
        }
        // printf("%d",bin);
        //         for(int k=0;k<=2;k++){
        //     printf("%d",arr[k]);
        // }
        int x = 0;
        int sum = 0;
        for (int j = 2; j >= 0; j--)
        {
            sum = sum + arr[j] * pow(2, x);
            x++;
        }
        num = num + sum * pow(10, a);
        a++;
        // bin=bin/1000;
    }
    // printf("%d\n",bin);
    int sum1 = 0;
    int y = 0;
    while (bin != 0)
    {
        sum1 = sum1 + (bin % 10) * pow(2, y);
        y++;
        bin = bin / 10;
    }
    num = num + sum1 * pow(10, a);
    printf("%d", num);

    return 0;
}
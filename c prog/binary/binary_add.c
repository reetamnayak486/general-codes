#include <stdio.h>
int main()
{
    long bin1 = 1001, bin2 = 1000;
    int i = 0;
    int sum[10];
    int rem = 0;
    while (bin1 != 0 && bin2 != 0)
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
    for (int a = 0; a <= i; a++)
    {
        printf("%d", sum[a]);
        /* code */
    }
//  while (i >= 0)
//     {
//         printf("%d", sum[i--]);
//     }
    return 0;
}
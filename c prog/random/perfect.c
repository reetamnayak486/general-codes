#include <stdio.h>
int main()
{
    int n, i, j, k, sum;
    printf("Enter upto which you want to print perfect no.s :\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = i;
        sum = 0;
        for (j = 1; j < k; j++)
        {
            if (k % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d\n", sum);
        }
    }
    return 0;
}
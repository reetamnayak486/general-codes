#include <stdio.h>
int i = 1;
int func(int arr[10], int max,int b)
{
    if (i == 6)
    {
        return max;
    }
    if (max < b)
    {
        max = b;
        // printf("DEBUG max= %d",max);
    }
    i=i+1;
    func(arr, max, arr[i]);
}
int main()
{
    int arr[] = {7, 6, 567, 12, 3, 7};
    int max = arr[0];
    printf("%d", func(arr, max, arr[i]));
    return 0;
}
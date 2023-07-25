#include<stdio.h>
void main()
{
    int i,j,n,t=1;
    printf("enter no of terms");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
      t=1;
       for(int k=0;k<n-i;k++){
          printf(" ");
          }
       for(j=0;j<=i;j++)
       {
        printf(" %d",t);
        t=t*(i-j)/(j+1);
       }
        printf("\n");
    }
}


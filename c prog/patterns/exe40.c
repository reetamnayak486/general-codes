#include <stdio.h>
int main()
{int n=5;int nst=n-1;int nsp=1;
for (int i = 1; i <=2*n-1; i++)
{
    /* code */printf("%c",'*');
}
printf("\n");

    for(int i=1;i<=n-1;i++){
        for(int k=1;k<=nst;k++){
            printf("%c",'*');
        }
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int l=1;l<=nst;l++){
            printf("%c",'*');
        }

        nst--;
        nsp+=2;

printf("\n");
    }
    return 0;
}
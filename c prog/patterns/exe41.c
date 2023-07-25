#include <stdio.h>
int main()
{int n=5;int nst=n-1;int nsp=1;int y=0;
for (int i = 1; i <=2*n-1; i++)
{
    /* code */printf("%c",'*');                                               
}
printf("\n");

    for(int i=1;i<=n-1;i++){
        for(int k=1;k<=nst;k++){
            printf("%d",k);
        }
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=nst;k>=1;k--){
            printf("%d",k);
        }
        /* int x=n+1;
        x=x+y;
        y++;                             //another type of pattern......just comment out the third loop and 
        for(int l=1;l<=nst;l++){            uncomment this other one
            printf("%d",x++);
        } */

        nst--;
        nsp+=2;

printf("\n");
    }
    return 0;
}
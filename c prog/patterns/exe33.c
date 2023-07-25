#include <stdio.h>
int main()
{int n=5;
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>=1;k--){

printf(" ");
        }char d='A';
        for(int j=1;j<=i;j++){
            
            printf("%c",d++);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{int n=5;
    for(int i=n;i>=1;i--){
        for(int k=1;k<=n-i;k++){

printf(" ");
        }
        for(int j=i;j>=1;j--){
            
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
}
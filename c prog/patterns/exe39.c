#include <stdio.h>
int main()
{ int n=5;int nsp=n/2; int nst=1;
for(int i=1;i<=n;i++){
        for(int k=nsp;k>=1;k--){
            printf(" ");
        }int a=0;
        for(int j=1;j<=nst;j++){
            if(j<=nst/2+1){a++;
                printf("%d",a);
            }
            else{
                printf("%d",--a);
                }

            //printf("%c",'*');
        }
    if(i<n/2+1){
            nsp--;
            nst=nst+2;
    
    }
    else{
            nsp++;
        
           nst-=2;
        }  
printf("\n");
}
    return 0;
}
#include <stdio.h>
int main()
{int n=5;int a=0;
    for(int i=1;i<=n;i++){ 
        /* if(i<=n/2+1){
            for(k=1;k<=n;k++){
                if(k==1+a||k=n-a){printf("%c",'*');}
                else(printf(" ");)
            }
        } */
        /* else{for(k=1;k<=n;k++){
                if(k==1||k-a){printf("%c",'*');}
                else(printf(" ");)
            }} */
             for(int k=1;k<=n;k++){
                if(k==1+a||k==n-a){printf("%d",k);}
                else{printf(" ");}
            }
                a++;
            printf("\n");

    }
    return 0;
}
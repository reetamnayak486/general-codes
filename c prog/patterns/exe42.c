/* #include <stdio.h>
int main()
{    int n=7;int a=0;int b=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a=i;
            b=j;
            if(i>n/2+1){
                a=(n+1)-i;
            }  
            if(j>n/2+1){
               b=(n+1)-j; 
            }
            if(a>=b){
                printf("%d",n+1-b);
            }
            else{printf("%d",n+1-a);}
        }
          printf("\n");
    }
    return 0;
} */

#include <stdio.h>
int main()
{
    int n=4;
    for(int i=1;i<=2*n-1;i++){
    for(int j=1;j<=2*n-1;j++){
        int a=i;
        if(i>n){
            a=2*n-i;
        }
        int b=j;
        if(j>n){
            b=2*n-j;
        }
        if(a>b){printf("%d",n+1-b);}
        else{printf("%d",n+1-a);}
    }
       printf("\n");
    }

    return 0;
}
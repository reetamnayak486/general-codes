/* #include <stdio.h>
int main()
{int n=5;
    for(int i=5;i>=1;i--){
        
        for(int j=1;j<=i;j++){
            printf("%d",(2*j-1));
        }
printf("\n");
    }
    return 0;
} */

#include <stdio.h>
int main()
{int n=7;
    for(int i=1;i<=n;i++){
        if(i==(n/2+1)){
        for (int k = 1; k <=n; k++)
        {printf("%d",k);}
        }
        else{
            for(int k=1;k<=n;k++){
                if(k==(n/2+1)){printf("%d",k);}
                else{printf(" ");}
            }
        }printf("\n");
    }
    
    return 0;
}
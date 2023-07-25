#include <stdio.h>
int main()
{
int n,i,j,sum=0;
    scanf("%d",&n);
    

    for(i=1;i<n;i++){
        if(n%i==0){
            sum=i+sum;
        }

        
}
    if(sum==n){
           printf("the no. is a perfect no."); 
        }


    return 0;
}
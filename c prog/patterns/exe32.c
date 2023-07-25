#include <stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=5;i++){
        for(int k=1;k<=i;k++){
            /* if(i%2==0){
                if(k%2==0){

                } */
                if(i%2==0 && k%2!=0 || i%2!=0 && k%2==0){
                    printf("0");
                }
                if(i%2!=0 && k%2!=0 || i%2==0 && k%2==0){
                    printf("1");
                }
            } printf("\n");
        }

    return 0;
    }


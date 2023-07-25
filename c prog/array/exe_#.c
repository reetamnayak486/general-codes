#include <stdio.h>
int n=0;
int triangle_(int (*arr)[4]){
    for(int i=1;i<4;i++){
        for(int j=0;j<n+1;j++){
            if(*(*(arr+i)+j)!=0){
                return 0;
            }           
        }
        n++;
    }
}

int main()
{
    int arr[4][4]={{2,3,4,5},{0,8,7,6},{0,0,8,9},{0,0,0,8}};
    // triangle_(arr);   
    if(triangle_(arr)){        
    printf("alright OK TATA");
    }
    return 0;
}

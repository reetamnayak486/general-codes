#include <stdio.h>
int m=0,n=0;
void exchange_dia(int (*arr)[4]){
    for(int i=0;i<4;i++){
        m=*(*(arr+i)+i);
        *(*(arr+i)+i)=*(*(arr+i)+(3-i));
        *(*(arr+i)+(3-i))=m;
    }
}

void printf_(int (*arr)[4]){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");    
    }
    
}

int main()
{   int arr[4][4]={{2,3,4,5},{2,8,7,6},{5,7,8,9},{4,6,4,8}};
    exchange_dia(arr);
    printf_(arr);
// printf("");
    return 0;
}
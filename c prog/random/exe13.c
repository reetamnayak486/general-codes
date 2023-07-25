#include <stdio.h>
int main()
{    /* int m1=2,n1=3,m2=2,n2=2;
    /*scanf("%d %d",&m1,&n1);
    scanf("%d %d",&m2,&n2); */int sum=0;

    int mat1[2][2]={{2,3},{4,5}};
    int mat2[2][2]={{4,5},{4,6}};
    int result[2][2];
    
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
        result[i][j]=0;
    for(int k=0;k<2;k++){
       int a=mat1[i][k]*mat2[k][j];
        sum=a+sum;
    }
    result[i][j]=sum;
}
}
for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
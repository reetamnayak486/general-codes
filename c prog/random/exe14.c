#include <stdio.h>

int main()
{
    // printf("Hello World\n");
    int marks[2][4] = {{45, 234, 2, 3},
                       {3, 2, 3, 3}};

    // for(int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */

            // printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    // marks[0] = 34;
    // printf("Marks of student 1 is %d\n", marks[0]);
    // marks[0] = 4;
    // marks[1] = 24;
    // marks[2] = 34;
    // marks[3] = 44;
    // printf("Marks of student 1 is %d\n", marks[0]);
    return 0;
}

/* for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            printf("enter the no %d %d",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            printf("enter the no %d %d",i,j);
            scanf("%d",&mat1[i][j]);
        }
    } */
    
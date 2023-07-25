#include <stdio.h>
#include <stdlib.h>
struct array
{
    int tol_size;
    int used_size;7
    int *ptr;
};

void create_arr(struct array* a,int tsize,int usize){
    (*a).tol_size=tsize;
    (*a).used_size=usize;
    (*a).ptr=(int *)malloc(tsize*sizeof(int));
}

void assign_arr(struct array*a){
    for (int i = 0; i < (*a).used_size; i++)
    {
        printf("enter the element %d",i);
        scanf("%d",((*a).ptr)[i]);
    }
    
}

void show_arr(struct array*a){
    for (int i = 0; i < (*a).used_size; i++)
    {
        printf("%d\n",(*a).ptr[i]);
        
    }
    
}


int main()
{ struct array marks;
  create_arr(&marks,10,2);
   assign_arr(&marks); 
   show_arr(&marks);
//printf("");
    return 0;
}
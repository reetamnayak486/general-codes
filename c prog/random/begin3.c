//&age //add of the variable
//ptr= the add of the variable
//*ptr
#include <stdio.h>
int sum(int *ptr1){
    *ptr1=*ptr1+5;
    printf("%d",*ptr1);
}
int main(){
    int n;
    n=6;
    int *ptr1= &n;
    sum(*ptr1);
    printf("%d",*ptr1);
    
}


// int *ab;
//*ab=&a


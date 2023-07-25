#include <stdio.h>
int res=1;
int pow_(int b,int p){
    if(p==1){
        return b;
    }
    res=res*2*pow_(b,p-1);
    // return b*pow_(b,p-1);
    return res;
}
int main()
{
    printf("%d",pow_(2,3));
    return 0;
}
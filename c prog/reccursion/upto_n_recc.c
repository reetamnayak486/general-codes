#include <stdio.h>
int func_(int ul,int ll){
    if(ul>ll){
        printf("%d",ll);
    }
    // int a=n--;
    // return n;
    //printf("%d",func_(n-1));
    func_(ul,ll+1);
}
int main()
{
    int ul=10;
    int ll=1;
printf("%d",func_(ul,ll));
    return 0;
}
#include <stdio.h>
int main()
{ int n=10097;int b=0;
while(n!=0){
    n=n/10;
    b++;
}
    
printf("%d",b);
    return 0;
}
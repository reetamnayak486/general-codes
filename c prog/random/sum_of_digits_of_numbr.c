#include <stdio.h>
int main()
{long n=1027;int sum=0;

while(n!=0){
    int b=n/10;
    int ld=n-10*b;
    sum=sum+ld;
    n=b;
}
printf("%d",sum);
    return 0;
}
#include <stdio.h>
int main()
{int n=6;int a='A';
for(int i=n;i>=1;i--){
    for(int k=1;k<=n-i;k++){
printf(" ");
}
for(int j=1;j<=2*i-1;j++){
    printf("%c",a++);
}printf("\n");
}
    
    return 0;
}
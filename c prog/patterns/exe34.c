#include <stdio.h>
int main()
{int n=5;
for(int i=1;i<=5;i++){
    for(int k=n-i;k>=1;k--){
printf(" ");
}int a='A';
for(int j=1;j<=2*i-1;j++){
    printf("%c",a++);
}printf("\n");
}
    
    return 0;
}
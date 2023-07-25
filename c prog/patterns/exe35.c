#include <stdio.h>
int main()
{int n=5;
for(int i=1;i<=5;i++){
    for(int k=n-i;k>=1;k--){
printf(" ");
}int a=1;
printf("%d",1);
for(int j=2;j<=2*i-1;j++){
    if(j<=((2*i-1)/2)+1){
        printf("%d",++a);
    }
    else{
        printf("%d",--a);
    }
}printf("\n");
}
    
    return 0;
}
#include <stdio.h>
int main()
{int n=5;
for(int i=1;i<=n;i++){
    if(i<=(n/2)+1){
        for(int k=n/2+1-i;k>=1;k--){
printf(" ");
}/* int a='A'; */
for(int j=1;j<=2*i-1;j++){
    printf("%c",'*');
    }
}

    else{
        for(int k=1;k<n-(n/2+1);k++){
            printf(" ");
        }

        for(int j=n-(n/2+1);j>=1;j--){
            
    printf("%c",'*');
        }
    }
printf("\n");
}
    
    return 0;
}
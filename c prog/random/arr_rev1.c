#include <stdio.h>
#include <string.h>
int arr_rev(int arr[]){
    int i;
    static int j;
for(i=0;i<=6;i++){
    for(j;j>=0;j--){
        
            int c=arr[i];
            arr[i]=arr[j];
            arr[j]=c;
            j--;
            if(j<0){
                break;
            }
            break;
            }


    }
}


int main()
{
int arr[]={90,89,5,6,7,45,3};
int a;
arr_rev(arr);

for(a=0;a<=6;a++){
printf(" %d",arr[a]);
}
    return 0;
}
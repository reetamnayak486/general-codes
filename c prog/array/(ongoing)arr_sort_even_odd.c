#include <stdio.h>
int count=0;
int a=0,len=0,b=0;
int x=0,y=0,z=1,h=0,g=0, s=0,f=0;

int main()
{
    int arr[]={8,3,9,9,6,7,7,8,4,3};
     len=sizeof(arr)/sizeof(arr[2]);
    for (int i = 0; i <len ; i++)
    {if(arr[i]%2==0){count++;}}
    
    if(arr[0]%2==0){
        b=count-1;
        a=1;
    }
    else{
        b=count;
    }
    while(a!=b){
        if(arr[a]%2==0){
            a++;
        }
        else{
            x=a;
            int d=arr[x];
            for(int k=x;k<len-1;k++){
                arr[k]=arr[k+1];
            }
            arr[len-1]=d;
        }
    }
for(int i=0;i<len;i++){
printf("%d ",arr[i]);
}
// printf("\n%d",count);
    // h=count;
    // while (y!=z)
    // {
    //     for( s=0;s<h;s++){
    //     for(f=0;f<h;f++){
    //     if(arr[f]>arr[f+1]){
    //     g=arr[f+1];
    //     arr[f+1]=arr[f];
    //     arr[f]=g;
    //     }
    //     }
    //     }
    //     f=count;
    //     h=len;
    //     y++;
    // }
    
// for(int i=0;i<len;i++){
// printf("%d ",arr[i]);
// }
    return 0;
}
#include <stdio.h>
int f=0,s=0,len=10,count=4,g=0,h=0,y=0,z=1;
int main()
{
   int arr[]={3,5,4,79,4,6,3,8};
   int len=sizeof(arr)/sizeof(arr[2]);
   for(int s=0;s<len;s++){
   for(int i=0;i<len;i++){
   if(arr[i]>arr[i+1]){
   g=arr[i+1];
   arr[i+1]=arr[i];
   arr[i]=g;
   }
   }
        // f=count;
        // h=len;
        // y++;
    // }
for(int i=0;i<len;i++){
printf("%d ",arr[i]);
}
    return 0;
}
}
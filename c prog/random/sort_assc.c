#include <stdio.h>
int main()
{
   int arr[]={7,3,8,2};int a=0;
    for(int j=0;j<=3;j++){
   for(int i=0;i<=3;i++){
    if(arr[i]>arr[i+1]){
        a=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=a;
    }
   }}
   for(int i=0;i<=3;i++){
    printf("%d",arr[i]);
   }
   return 0;
}
#include <stdio.h>
int func(int arr[],int len,int element,int high,int low){
    if(high<low){
        return -1;
    }
      int mid=(high+low)/2;
       if(arr[mid]==element){
        return mid;
       }
       else if(arr[mid]>element){
        high=mid-1;
        func(arr,len,element,high,low);
       }
       else if(arr[mid]<element){
        low=mid+1;
        func(arr,len,element,high,low);
       }
       

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,54,76,85};
    int len=sizeof(arr)/sizeof(arr[2]);
    int element=54;
    int high=12;
       int low=0;    
printf("%d",func(arr,len,element,high,low));
    return 0;
}
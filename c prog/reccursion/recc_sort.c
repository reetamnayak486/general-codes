#include <stdio.h>
//we can't return array in c, so code not running
int a=0;
int b=0;
int func_(int arr[12],int len){ 
    if(b==len){
        return arr;
    }
    // if(b==len){
    //     return arr;                    
    // }
    if(arr[i]>arr[i+1]){
        b=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=b;
    }
    b++;
    func_(arr,len);
}
int func(int arr[12],int len){
    if(a==len){
        return arr;
    }
    func_(arr,len);
    a++;
    func(arr,len);

}
int main()
{
    int arr[]={5,6,3,7,3,9};
       int len=sizeof(arr)/sizeof(arr[2]);
    int arr1=func(arr,len);
    for(int i=0;i<length;i++){
        printf("%d",arr1[i]);
    }
// printf();
    return 0;
}
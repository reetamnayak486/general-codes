//the first if will be run from 0-n (n=position-1 index) then continue then
//second if will from next index and rest of the arr elements......try to do 
//in a single loop
#include <stdio.h>
//int a=0;
int main()
{
    int arr[]={2,3,4,5,6,8};
    int len=sizeof(arr)/sizeof(arr[2]);
    int arr1[len++];
    int no=10;
    int position=4;
    for(int i=0;i<len;i++){
         if(i<position){
            arr1[i]=arr[i];
         }
         else if(i>position){
            int a=i-1;
            arr1[i]=arr[a];
         }
    }
    arr1[position]=no;
for(int i=0;i<len;i++){
printf("%d\n",arr1[i]);
}
    

    return 0;
}
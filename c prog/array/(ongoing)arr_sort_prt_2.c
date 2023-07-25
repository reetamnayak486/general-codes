// this is being sorted fully
#include <stdio.h>
int f=0,s=0,len=10,count=4,g=0,h=0,y=0,z=2;
int main()
{
    int arr[]={8,6,8,4,3,3,9,9,7,7};
    h=count;int s=1;
    while (y!=z)
    {
        while(s<h)
        {
            f=1;
            while(f<h)
            {
            if(arr[f-1]>arr[f]){
            g=arr[f];
            arr[f]=arr[f-1];
            arr[f-1]=g;
            }
         f++;
        }
        s++;
        }
        f=count+1;s=count+1;
        h=len;
        y++;
    }
for(int i=0;i<len;i++){
printf("%d",arr[i]);
}
    return 0;
}


// #include <stdio.h>
//     int g=0;
// int main()
// {   
//     int arr[]={6,5,7,8,3,2,8,3,0,7};
//     int len=sizeof(arr)/sizeof(arr[2]);
//      for(int s=0;s<len;s++){
//     for(int f=0;f<len;f++){
//     if(arr[f]>arr[f+1]){
//     g=arr[f+1];
//     arr[f+1]=arr[f];
//     arr[f]=g;
//     }
//     }
//     }
// for(int f=0;f<len;f++){
// printf("%d",arr[f]);
// }
//     return 0;
// }
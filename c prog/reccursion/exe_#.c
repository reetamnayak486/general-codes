#include <stdio.h>
#include <string.h>
// int arr[]={5,5,54,3,6};
//  int func(int n){
//       printf("%d\n",arr[n]);
//       if(n>0){
//         func(n-1);
//       }
//  }

// int main()
// {
    
//     int n=sizeof(arr)/sizeof(arr[0]);
//     func(n-1);
//     return 0;
// }



int arr[]={5,5,54,3,6};
int sum=0;
 int func(int n){
      sum=sum+arr[n];
      if(n>0){
        func(n-1);
      }
      return sum;
 }

int main()
{
    
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",func(n-1));
    return 0;
}
//here we can also print all the unique elements in the array
//we can also calculate the no. of duplicate elements
//if we are asked to delete the duplicate elements....u can make a new arr like n_arr
#include <stdio.h>
int n_arr[10];int a=0;
int func_(int arr[40],int len){
   
    // int len_=sizeof(n_arr)/sizeof(n_arr[0]);
    // printf("%d",len_);
     for (int i = 0; i<a; i++)
    {
     int count=0;
     if(i==a-1){      //this is because while we are at the last element its zero.
        count=1;
     }
        /* code */
        for(int j=0;j<len-1;j++){
            if(n_arr[i]==arr[j]){
                count++;
            }
        }
                //   printf("%d\n",count);
        printf("the frequency of %d is %d\n",n_arr[i],count);
    }
    return 0;
    
}
int func(int b,int arr[40],int len,int i){
        int count=0;
    for(int k=i-1;k>=0;k--){
        if(arr[i]==arr[k]){
            count++;
        }
        // printf("%d",count);
    }
    if(count==0){
        n_arr[a]=arr[i];
       //printf("%d\n",n_arr[a]);
        a++;
    }
    //printf("%d",a);
    return 0;

}
int main()
{
    int arr[]={12,10,10,13,15,13,13,14,200,200,7};
    int len=sizeof(arr)/sizeof(arr[2]);
    for(int i=0;i<len;i++){
        func(arr[i],arr,len,i);
    }

    func_(arr,len);
    // printf("%d",len-a);

// printf("");
    return 0;
}
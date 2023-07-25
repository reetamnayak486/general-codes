#include <stdio.h>
int main(){
    int n=97,count,i,j;
  
    for(int i=1;i<=n;i++)
    {
    count=0;// It is compulsory to write count=0 at this position 
            //because if we will write it elsewhere that is outside 
            //and above the 1st for loop then the count value will 
            //not be reassigned as 0 but it will take the value assigned to it at end of the 2nd , 
            // which will be equal to 2 or it can be greater than 2 
    
    for(j=1;j<=i;j++)
    {
    if(i%j==0){count++;}
    }         
    
    if(count==2){printf("%d\n",i);}    

    }
    }


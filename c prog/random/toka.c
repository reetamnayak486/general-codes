#include <stdio.h>
#include <math.h>
int main()
{ int length=0;
    int bin=11001;
    while(bin!=0){
         bin =bin/10;
         length++;
    } 
    printf("%d",length);
return 0;}
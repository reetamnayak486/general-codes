#include <stdio.h>
int main()
{   int a=0,b=0;
    FILE *ptr;
    ptr=fopen("text.txt","r");
    char c=fgetc(ptr);
    while(c!=EOF){
        c=fgetc(ptr);
        a++;
        if(c==' '){
            b++;
        }
    }
    
printf("%d %d",a,b);
    return 0;
}
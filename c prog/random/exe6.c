#include <stdio.h>
#include <string.h>
void trim(char *str){

    int in=0;
    int index=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='<'){
            in=0;
            continue;
        }
        else if(str[i]=='>'){
            in=1;
            continue;
        }

        if(in==1){
            str[index]=str[i];
            index++;
        }

    }str[index]='\0';

    while(str[0]=' '){
        for(int i=0;i<strlen(str);i++){
            //str[i++]=str[i];
            str[i]=str[i+1];
        }
    }

    //while(str[])


}
int main(){

    char str[]="<h16>   ~~this is a~~     </h16>";
    trim(str);
    printf("%s",str);

    return 0;
}
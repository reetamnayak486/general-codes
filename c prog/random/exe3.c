#include <stdio.h>
#include <string.h>

int parser(char *str){

    int in=0;
    int index=0;
    for(int i=0;i<strlen(str);i++){

        if(str[i]=='<')in=0;
        if(str[i]=='>')in=1;
        if(in==1 && str[i]!='>'){
            str[index]=str[i];
            index++;
        }
    }str[index]='\0';

/* for(int j=0;str[0]==' ';j++){

    str[j]=str[j+1];
}

for(char k=strlen(str);str[strlen(str)-1]==' ';k--){
    str[strlen(str)-1] ='\0';
} */
 return 0;

}
int main(){

    char str="<h16>    this is string     </h78>";
    parser(str);
    puts(str);
return 0;
}
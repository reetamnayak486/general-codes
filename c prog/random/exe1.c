#include <stdio.h>
#include <string.h>

struct info{
    char name[50];
    int l_no;
    int r_no;
    int kms;
}d1,d2,d3;

int main(){
    int n;
    printf("d_no.");
    scanf("%d",&n);
/* if(n=1){
    printf("enter name ");
    char arr1[50];
    gets(arr1);
    strcpy(d1.name,arr1);   
    printf("enter l_no");
    scanf("%d\n",&d1.l_no);
    printf("enter r_no");
    scanf("%d",&d1.r_no);
    printf("enter kms");
    scanf("%d",&d1.kms); */
//}
if(n=2){
    printf("enter name ");
    scanf("%s",&d2.name);
    printf("enter l_no");
    scanf("%d",&d2.l_no);
    printf("enter r_no");
    scanf("%d",&d2.r_no);
    printf("enter kms");
    scanf("%d",&d2.kms);
}
/* if(n=3){
    printf("enter name ");
   char arr3[50];
   gets(arr3);
   strcpy(d3.name,arr3);2
    printf("enter l_no");
    scanf("%d\n",&d3.l_no);
    printf("enter r_no");
    scanf("%d",&d3.r_no);
    printf("enter kms");
    scanf("%d",&d3.kms);
} */
return 0;

}
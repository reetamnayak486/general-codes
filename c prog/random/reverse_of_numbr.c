#include <stdio.h>
#include <math.h>
int main()
{
//    long n=1978;
//    int b=0;int n_num=0;
// while(n!=0){
//     n=n/10;
//     b++;
// } n=1978;
// while(n!=0){                             //for palindrome no.....just check that if the reverse of the no. is 
//     int a=n/10;                               equal or not
//     int ld=n-a*10;
//     n_num=n_num+(ld*pow(10,--b));
//     n=a;
// }
// printf("%d",n_num);
// // printf("%d",b);

int n=1978, sum=0,ld;

while (n!=0)
{

 ld= n%10;
sum = sum*10 + ld;
n= n/10;

}
    return 0;
}
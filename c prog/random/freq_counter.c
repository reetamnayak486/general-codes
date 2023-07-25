#include <stdio.h>
int main()
{
    int num=100299;int ld=0;
    for(int n=0;n<=9;n++){
        int num1=num;
        int count=0;
        while(num1!=0){
            ld=num1%10;
            if(ld==n){count++;}
            num1=num1/10;
            
 }
 printf("the frequecy of %d is %d\n",n,count);

           
    }
    return 0;
}

// /*/**
//  * C program to count frequency of digits in a given number
//  */

// #include <stdio.h>
// #define BASE 10 /* Constant */

// int main()
// {
//     long long num, n;
//     int i, lastDigit;
//     int freq[BASE];

//     /* Input number from user */
//     printf("Enter any number: ");
//     scanf("%lld", &num);

//     /* Initialize frequency array with 0 */
//     for(i=0; i<BASE; i++)
//     {
//         freq[i] = 0;
//     }

//     /* Copy the value of 'num' to 'n' */
//     n = num; 

//     /* Run till 'n' is not equal to zero */
//     while(n != 0)
//     {
//         /* Get last digit */
//         lastDigit = n % 10;

//         /* Remove last digit */
//         n /= 10;

//         /* Increment frequency array */
//         freq[lastDigit]++;
//     }

//     /* Print frequency of each digit */
//     printf("Frequency of each digit in %lld is: \n", num);
//     for(i=0; i<BASE; i++)
//     {
//         printf("Frequency of %d = %d\n", i, freq[i]);
//     }

//     return 0;
// }
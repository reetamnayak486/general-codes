#include <stdio.h>
//#include "exe16.c"
# define PI 3.14
# define square(a,b) (a+b)
# ifdef square
int main()
{
     int a;
     int b;
/* printf("this is my daughter %f ",square(8)); */
printf("%d",square(8,7));
/* # undef square
printf("%d",square(3,7)); */

    return 0;
}
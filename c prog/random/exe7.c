#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int n;
   printf("emp_id1 length");
   scanf("%d", &n);
   char *ptr;
   ptr = (char *)malloc((n+1) * sizeof(char));
   scanf("%s", ptr);
   puts(ptr);

   /* /* gets(ptr);
   puts(ptr); */
   printf("emp_id1 length");
   scanf("%d", n);
   getchar();

   ptr = (char *)realloc(ptr, (n+1) * sizeof(char));
   scanf("%s", ptr);
   puts(ptr);
   return 0;
}
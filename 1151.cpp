#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, first = 0, second = 1, next, c;

   scanf("%d",&n);

   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      if(c == n-1){
        printf("%d\n",next);
      }else{
        printf("%d ",next);
      }

   }

   return 0;
}

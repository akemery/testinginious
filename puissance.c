#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int power(int p, int n){
   int i;
   x = 1;
      
   if(p == 0)
     return 0;
   if(p > INT_MAX)
     return -1;
   for(i = 1; i <= n; ++i){
     if(x > INT_MAX/p)
        return -1;
     x=x*p;
   }
   return(x);
}


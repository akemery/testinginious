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

int main(int argc, char*argv[]){
   int i;
   i = random()%12;
   while (i<2)
      i= rand()%12;
   
   printf("power %d^%d = %d\n", i,i, power(i,i));
   
   i = random()%12;
   while (i<2)
      i= rand()%12;
   
   printf("power %d^%d = %d\n", i,i, power(0,1));
   
   printf("power %d^%d = %d\n", i,i, power(1,0));
   
   printf("power %d^%d = %d\n", i,i, power(0,0));
   
   printf("powerbis %d^%d = %d\n", i,i, power(INT_MAX,1));
   
   printf("%d\n", INT_MAX);
   return 0;
}

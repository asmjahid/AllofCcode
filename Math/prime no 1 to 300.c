//Print prime numbers between 1-300 using break and continue in c


#include <math.h>
#include <stdio.h>
main(){
  int i, j;
  i = 2;
  while ( i < 900 ){
     j = 2;
     while ( j < sqrt(i) ){
         if ( i % j == 0 )
            break;
         else{
            ++j;
            continue;
         }
      }
      if ( j > sqrt(i) )
            printf("%d\t", i);
      ++i;
  }
  return 0;
}

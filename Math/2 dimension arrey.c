//How to pass two dimensional array to a function in c
#include <stdio.h>
#define M 3
#define N 5
void fstore2D(int a[][N]);
void fretrieve2D(int a[][N]);
int main(){
  int a[M][N];
  printf("Input data in matrix (%d X %d)\n", M, N);
  fstore2D(a);
  fretrieve2D(a);
  return 0;
}
void fstore2D(int a[][N]){
    int i, j;
    for (i = 0; i < M; ++i){
    for (j = 0; j < N; ++j)
         scanf("%d", &a[i][j]);
    }
}
void fretrieve2D(int a[][N]){
   int i, j;
   for ( i = 0; i < M; ++i ){
       for ( j = 0; j < N; ++j)
            printf("%6d ", a[i][j]);
       printf("\n");
   }
}

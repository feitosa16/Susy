#include <stdio.h>
#include <math.h>

int main(){
int n = 10;

  //entrada do vetor de A
int A[n];{
  for(int i=0; i<9;i++){
     scanf("%d\n",&A[n]);
  }
}
  //impressão do vetor B
  int B[n];{
    for(int j=0; j<=9; j++){
      B[n]= pow(A[n],3);
        printf("%d\n", B[n]);
    }
  }
  return 0;
}
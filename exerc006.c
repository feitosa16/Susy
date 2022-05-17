#include <stdio.h>
int main() {
int l, c;

scanf("%d %d", &l,&c);

int m[l][c];
  
for(int i=0; i<l; i++){
  for(int j=0; j<c; j++){
  scanf("%d",&m[i][j]);
  }
  }
for(int k=0; k<c; k++){ 
  for(int n=0; n<l; n++){ 
  printf("%d ", m[n][k]);
  }
   printf("\n");
}  
  return 0;
  }
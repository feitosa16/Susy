#include <stdio.h>
int main(){
int v[10];
int vv[10]; 
int i;

 for(i=0; i<=9;i++){
    scanf("%d", &v[i]);
  } //rodando
  
for(i=0; i<=9;i++){
    scanf("%d", &vv[i]);
  } //rodando  
for(int i=0; i<=9; i++){
   printf("%d|%d|", v[i], vv[i]); //erro, mostra o primeiro valor inserido e fazuma especie de soma no segundo
  }
  printf("\n");
  return 0;
}
#include <stdio.h>
int main(){
float notas[20], v=0.0; //-> valor a ser lido| notas[5] vetor com 5 notas 
int n=0;
  
  for(int i=0;i<=19;i++){
    scanf("%f\n", &notas[i]);//entrada do vetor }// -> rodou perfeitamente
  }
  
  while(v>=0){
    n=0;
    scanf("%f", &v);//entrada dos valores a serem encontrados no vetor notas
    if(v<0){
      break;
    }
    for(int i=0;i<=19;i++){
      if(v==notas[i]){
         n = 1;
      }
    }

    if(n==1){
      printf("existe\n");
    } else{
      printf("nao existe\n");
      }
  }
return 0;
  }  
  
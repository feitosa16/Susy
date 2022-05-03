
//receber a quantidade de produtos VENDIDOS e o valor deles em VETORES
#include <stdio.h>
int main(){
  
float val[10]; // valor dos produtos
float luc = 0.000;// lucro
int qtdp[10]; //qtd dos produtos 
int rsoma=0; //soma do vetor das qtds de produtos

  
  for(int i=0; i<=9; i++){
  scanf("%d\n", &qtdp[i]);
    rsoma = rsoma + qtdp[i]; //rodou perfeitamente
    
  }
  for(int i=0; i<=9; i++){
  scanf("%f", &val[i]);/*rodou com as entradas também*/
  }
  
  for(int i=0; i<=9; i++){ //validação do valor em cada produto
    luc += qtdp[i] * val[i]; //calculo de lucro de cada indice do vetor pelo valor correspondente
  }
  printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", luc, rsoma);
  return 0;
}
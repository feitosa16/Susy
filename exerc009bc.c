#include <stdio.h>
int n;
int i;
int maior=0; 
int menor=999999;
int main(){
// passo I-leitura do tamando do vetor
 int Vi[100];
   scanf("%d",&n);
// passo II - leitura dos elementos do vetor
  for(i=0; i<n;i++){
     scanf("%d",&Vi[i]);
  }
 //printf("%d\n",n);
  
// passo  III - chamada do procedimento de busca
  for(int i=0; i<n; i++){
    if(Vi[i]>maior){
      maior = Vi[i];
     
    }
  }
  for(i=0; i<n; i++){
    if(Vi[i]<menor){
      menor = Vi[i];
    }
  }
// passo IV - imprimir maior e menor valor do vetor
 printf("maior valor: %d\n",maior);
 printf("menor valor: %d\n",menor);
  return 0;
}
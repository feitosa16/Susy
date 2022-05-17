#include <stdio.h>
#include <stdio.h>

struct ponto{
int sup1x;
int sup1y;
int inf1x;
int inf1y;
int sup2x;
int sup2y;
int inf2x;
int inf2y;
}ponto;

int main(){
//primeiro retangulo
scanf("%d %d", &ponto.inf1x,&ponto.inf1y);
scanf("%d %d", &ponto.sup1x,&ponto.sup1y);
//segundo retangulo
scanf("%d %d", &ponto.inf2x,&ponto.inf2y);
scanf("%d %d", &ponto.sup2x,&ponto.sup2y);
  
  /*printf("%d %d \n", ponto.inf1x, ponto.inf1y);
  printf("%d %d \n", ponto.sup1x, ponto.sup1y);
  printf("%d %d \n", ponto.inf2x, ponto.inf2y);
  printf("%d %d \n", ponto.sup2x, ponto.sup2y);*/

  //calculando o tamanho dos retangulos
int a1,a2; //areas
int h1,h2; //alturas
int b1,b2; //bases  

//base de cada retangulo  
  b1=ponto.inf1y-ponto.inf1x;
  b2=ponto.inf2y-ponto.inf2x;
//altura de cada retangulo
  h1=ponto.sup1y-ponto.sup2x;
  h2=ponto.sup2y-ponto.sup2x;
//area de cada retangulo 
  a1=(b1*h1)/2;
  a2=(b2*h2)/2;
//verificaçãode condicional 
 if(a2<=a1){ 
   printf("o segundo retangulo esta contido no primeiro\n"); 
  }
 else{
    printf("o segundo retangulo nao esta contido no primeiro\n");
  }
  return 0;
}
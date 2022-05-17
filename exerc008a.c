#include <stdio.h>
#include <math.h>
struct ponto{
float x1;
float y1;
float x2;
float y2;
}ponto;

int main(){

scanf("%f %f", &ponto.x1, &ponto.y1);
scanf("%f %f", &ponto.x2, &ponto.y2);

/*printf("%.3f\n",ponto.x1);  printf("%.3f\n",ponto.y1);  printf("%.3f\n",ponto.x2); printf("%.3f\n",ponto.y2);*/

  float d;
  float y, x;
  
 //diferença de distancia entre as coordenadas 
  y = ponto.y2-ponto.y1;
  x = ponto.x2-ponto.x1;
  
   //distancia euclidiana
    //d(x,y)=raiz(x2-x)^2+(y+y2)
  d = sqrt(pow(y,2) + pow(x,2));
  
  //printf("%.3f",d);

  if(d<0.0000001){
    printf("os pontos sao iguais\n");
  }else{
    printf("os pontos nao sao iguais\n");
  }
  return 0;
}
//rodou todos os testes do susy
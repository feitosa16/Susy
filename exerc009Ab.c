#include <stdio.h>
#include <math.h>
int main(){
float n1, n2;
char c;
float mAri, mGeo;

  //entrada do usuário
  scanf("%c", &c);
  scanf("%f %f",&n1,&n2);
  //condições de entrada
  if(c=='A'){
    //Calculo da média aritmetica
    mAri= (n1+n2)/2;
    printf("%.3f\n",mAri);
  } else if(c=='B'){
    //calculo da media geometrica
    mGeo=sqrt((n1*n2));
    printf("%.3f\n",mGeo);
  }
  return 0;
}
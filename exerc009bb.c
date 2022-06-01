#include <stdio.h>

int main(){
int z, w, z1,w1,z2,w2; //numeros complexos
int a, c; //números reais
int b, d; //numeros imaginários
char op;  //operador
int nc,nc1;
scanf("%d %d %c %d %d",&a, &b,&op,&c,&d);
  // aplicação das operações
  z = a + c;
  w = b + d;
  z1 = a * c;
  w1 = b * d;
  z2 = a * d;
  w2 = b * c;
  nc = z1 - w1;
  nc1 = z2 + w2;
  //condicionais
  if(op == '+'){
    int soma = (z)+(w);
    printf("%d + %di\n", z,w);
  }
  if(op =='*'){
    int multi = (nc)+(nc1);
  printf("%d + %di\n", nc, nc1);
  }
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
 struct pessoa{
  float altura;
  float peso;
  char nome[100];
} pessoa;

int main(){

       //entradados valores: 
 scanf("%f\n", &pessoa.altura);
 // printf("%.3f\n", pessoa.altura);
  
 scanf("%f\n", &pessoa.peso);
 // printf("%.3f\n", pessoa.peso);

 scanf("%s",pessoa.nome);
 // printf("%s\n",pessoa.nome);
  
        //calculo de imc
  float imc=  pessoa.peso/pow(pessoa.altura,2);
  printf("%.3f\n", imc);
  return 0;
}


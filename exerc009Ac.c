#include <stdio.h>
#include <math.h>

int main(){
char c;
float n1,n2;
float a,s,m,d,p; //adição,subtração,multiplicação, divisão e potencia 

  //entrada dos numeros e operador 
  scanf("%f%c%f",&n1,&c,&n2);
  //verficaçãod e condições
  if(c=='+'){
    a = n1+n2;
    printf("%.3f\n",a);
  }else if(c=='-'){
    s = n1-n2;
     printf("%.3f\n",s);
  }else if(c=='*'){
    m = n1*n2;
     printf("%.3f\n",m);
  } else if(c=='/'){
    d = n1/n2;
    printf("%.3f\n",d);
  } else if(c=='^'){
    p = pow(n1,n2);
    printf("%.3f\n",p);
  }
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main(){
        float op, opa, result;
        char sinal;
        scanf("%f%c%f",&op,&sinal,&opa);
      
        if(sinal=='+'){
                result=op+opa;
                printf("%.3f %c %.3f= %.3f\n",op,sinal,opa,result);
        }
        else if(sinal=='-'){
                result=op,opa;
                printf("%.3f %c %.3f= %.3f\n",op,sinal,opa,result);
        }
        else if(sinal=='*'){
                result=op*opa;
                printf("%.3f %c %.3f=%.3f\n",op, sinal,opa,result);
        }
        else if(sinal=='/'){
                result=op/opa; 
                printf("%.3f %c %.3f=%.3f\n",op,sinal,opa,result);
        }
        else{
                printf("Operador invalido\n");
        }
return 0; 
}
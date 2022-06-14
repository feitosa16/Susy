//entrada devarios paragrafos com no máximo 1000 caracteres,que encerra a  sessão com a palavra FIM// contar a  ocorrencia de A a Z minusculo e maiusculo e de 0 a 9;// imprimir um grafico de linhas formadas por  * para a quantidade  de ocorrencia de cada caractere// probabilidadede cada caractereédada pelo numero de ocorrências decada caractere/pelo numero total de carcteres e digitos considerados//n frequencia de um caractere// p -> probabilidade  do caractereimpresso comduascasas decimais // primeiro imprimir ograficode frequênciados caracteres maiuscurlos e depois minusculos
#include <stdio.h>
#include <string.h>

int main(){
//declaração  de variáveis 
int percursor;
int valorCaracteres=0; 
int i; 
int j;
char paragrafo[1000];
char sentenca[]="FIM";
int caracteres[255];
float probabilidade[255];
//vetor para caracteres
    for(i=0;i<255;i++){
        caracteres[i]=0;
    }
//entrada dos parágrafos 
while(strcmp(paragrafo,sentenca)!=0){
  fgets(paragrafo,1000,stdin);
    percursor = strlen(paragrafo);
//condicional de parada 
  if(paragrafo[0] == 'F' && paragrafo[1] == 'I' && paragrafo[2] == 'M'){
      break;
  }
//Percorre todos os parágrafos e adiciona outros 
  for(i=0;i<percursor;i++){
     caracteres[paragrafo[i]]++;
  }        
}
//Caracteres maiúsculos
    for(i=65;i<=90;i++){
        valorCaracteres = valorCaracteres+caracteres[i];
    }
// Caracteres minúsculos 
    for(i=97;i<=122;i++){
        valorCaracteres = valorCaracteres+caracteres[i];
    }
// Caracteres numerais 
  for(i=48;i<=57;i++){
    valorCaracteres = valorCaracteres+caracteres[i];
  }
//Gráfico letras maiúsculas 
printf("Caracteres Maiusculos:\n");
  for(i=65;i<=90;i++){
//Calculando a probabilidade 
    probabilidade[i] = (int)caracteres[i]/(float)valorCaracteres;
printf("%c: ",i);
        for(j=caracteres[i];j>0;j--){
printf("*");
  }
printf(" (%d - %.2f)\n",caracteres[i],probabilidade[i]);
    }
//Gráfico letras minusculas
printf("\nCaracteres Minusculos:\n");
 for(i=97;i<=122;i++){
   probabilidade[i] = (int)caracteres[i]/(float)valorCaracteres;
     printf("%c: ",i);
       for(j=caracteres[i];j>0;j--){
         printf("*");
        }
   printf(" (%d - %.2f)\n",caracteres[i],probabilidade[i]);
    }
//Gráfico dos numeros
printf("\nDigitos:\n");
 for(i=48;i<=57;i++){
  probabilidade[i] = (int)caracteres[i]/(float)valorCaracteres;
    printf("%c: ",i);
 for(j=caracteres[i];j>0;j--){
    printf("*");
        }
    printf(" (%d - %.2f)\n",caracteres[i],probabilidade[i]);
    }
return 0;
  }

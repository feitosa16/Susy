// fazer  a leitura de um dna composto por 6 colunas e 2 linhas
// testes em n e em 2n (for's)
#include <stdio.h>
int main(){
char fil[]={"AAAAAAAAAAAAA"}; // filamento 1 entrada de até 12 char pelo usuario 
char fil2[]={"AAAAAAAAAAAAA"};// filamento 2
int a1=0, a2=0, b1=0, b2=0, c1=0, c2=0, d1=0, d2=0, e1=0, e2=0, f1=0, f2=0;
int dnam = 0;
  
  scanf("%d\n", &dnam); // -> entrada do usuário da quantidade de vezesem que o dna deverá ser rodado
  
for(int d=0; d<dnam  && dnam>0; d++){ //-> validação da entrada numericade quantas vezes o programa irá compilar
  
  scanf("%s", fil); // -> entrada do usuário 
  scanf("%s", fil2); // -> entrada do usuário 

  for(int i=0; i<=11; i++){ //for designado para testar as variaveis de até 12 posições do filamento
    if(fil[i]=='A'){ // verifica SE 'A' esta no filamento 1 (o mesmo acontece com cada letra)
      a1 = a1 + 1;  //somatoria da quantidade de letras A's tem no filamento 1 (o mesmo acontece com cada letra)
    } else if(fil[i]=='B'){
      b1 = b1 + 1; 
    } else if(fil[i]=='C'){
      c1 = c1 + 1; 
    } else if(fil[i]=='D'){
      d1 = d1 + 1; 
    } else if(fil[i]=='E'){ 
      e1 = e1 + 1;
    }else if(fil[i]=='F'){
      f1 = f1 + 1; 
    } 
    
    if(fil2[i]=='A'){ // verifica SE 'A' esta no filamento 2 (o mesmo acontece com cada letra)
      a2 = a2 + 1; //somatoria da quantidade de letras A's tem no filamento 1 (o mesmo acontece com cada letra)
    } else if(fil2[i]=='B'){
      b2 = b2 + 1; 
    } else if(fil2[i]=='C'){
      c2 = c2 + 1; 
    } else if(fil2[i]=='D'){
      d2 = d2 + 1; 
    } else if(fil2[i]=='E'){
      e2 = e2 + 1; 
    } else if(fil2[i]=='F'){
      f2 = f2 + 1; 
    } 
      }
 /*printf("a: %d a2: %d b: %d b2: %d c: %d c2: %d d: %d  d2: %d e: %d e2: %d f1: %d f2: %d\n", a1, a2, b1, b2, c1, c2, d1, d2, e1, e2, f1, f2); //impressão teste para acompanhar as contagens */
  if((a1==a2) && (b1==b2) && (c1==c2) && (d1==d2) && (e1==e2) && (f1==f2)){ //-> comparação da somas
    printf("Caracteristicas Iguais\n"); //se a comparação for equivalent, as carcteristicas são iguais
  } else{
    printf("Caracteristicas Diferentes\n"); // se não,são diferentes
  }
  a1=0, a2=0, b1=0, b2=0, c1=0, c2=0, d1=0, d2=0, e1=0, e2=0, f1=0, f2=0;
  }
  return 0;
  }
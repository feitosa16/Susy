#include <stdio.h>
#include <stdlib.h>

int main(){
int lin; 
int col; 
int x = 0;
    scanf("%d %d", &lin, &col);
    
    int matriz[lin][col];
    
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
        scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i=0;i<lin;i++){
        for(int j=0; j<col; j++){
         if(matriz[i][j] != matriz[j][i]){
            x = 1;
         }
        }
    }
    
    if(x == 1){
        printf("Nao eh simetrica\n");
    } else {
        printf("Eh simetrica\n");
    }
    return 0;
}
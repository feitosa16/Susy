
#include <stdio.h>
int main(){
int i, par, impar, a;


for(; i<=10; i++){
    scanf("%d\n", &a);
        if(a%2==0){
            continue;
            par++;
        }
        else{
            impar++;
        }
printf("%d pares, %d impares", par, impar);
return 0;
}
}



   
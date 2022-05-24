#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
  char str[100];
  int n,v=0;
   scanf("%s",str);
  for(int i= strlen(str)-2,n=0; i>=0;i--,n++){
    if(toupper(str[i+1])!=toupper(str[n])){
      v=1;
    }
  }
  if(v==0){
    printf("Esta palavra e um palindromo\n");
  }else{
    printf("Esta palavra nao e um palindromo\n");
  }
  return 0;
  }
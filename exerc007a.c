#include <stdio.h>
#include <string.h>
int main(){
  int i;
  char str[80];
  
fgets(str,80,stdin);
  for(i= strlen(str)-2;i>=0;i--){
    printf("%c",str[i]);
  }
    printf("\n");
  return 0;
}
#include <stdio.h>
#include <math.h>

float volume_esfera(){
float v;
float pi= 3.14159;
float r;
  scanf("%f",&r);
  v=(4*pi*(pow(r,3)))/3;
  
 return v; 
}
int main() {
   //resultado
  float res = volume_esfera();
  printf("%.2f\n", res);
  return 0;
}
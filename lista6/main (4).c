/*4. Crie um programa que contenha um array de float contendo 10 elementos. Imprima
o endereço de cada posição desse array. */

#include <stdio.h>

int main(void) {
  float x[10];
  for(int i= 0; i<10; i++){
    printf("%p\n", &x[i]);
  }
  return 0;
}
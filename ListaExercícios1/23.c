#include <stdio.h>

int main() {

  int x;
  scanf("%d",&x);
  
  if((x%400 == 0)||(x%4 == 0 && !(x%100 == 0))){
    printf("é bissexto");
  }else {
    printf("NAO é bissexto");
  }
  
  return 0;
}
#include <stdio.h>

int main(){

  float f;

  printf("Enter fahrenheit degree in decimal form like 90.0 ");
  scanf("%f", &f);

  float c;
  c = (f - 32) / 1.8;

  printf("The result is %2f", c);


  return 0;
}

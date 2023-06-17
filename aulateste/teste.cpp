#include <stdio.h>

int main()
{
  float euro, real;
  float taxa=6;
  printf ("Entre com a com a qauntidade de EUR: ");
  scanf("%f",&euro);
  real = euro * taxa;
  printf("Equivale a: R$ %.2f", real);
  return(0);
}


#include <stdio.h>

float soma(float a, float b)
 {
 return (a + b);
 }

 float subt(float a, float b)
 {
 return (a - b);
 }

 float mult(float a, float b)
 {
 return (a * b);
 }

 float divi(float a, float b)
 {
 return (a / b);
 }

int main(){
   float num1, num2;

   printf("Digite o primeiro numero: ");
   scanf("%f", &num1);
   printf("Digite o segundo numero: ");
   scanf("%f", &num2);

   printf("%.1f + %.1f = %.1f\n", num1, num2, soma(num1,num2));
   printf("%.1f - %.1f = %.1f\n", num1, num2, subt(num1,num2));
   printf("%.1f * %.1f = %.1f\n", num1, num2, mult(num1,num2));
   printf("%.1f / %.1f = %.1f\n", num1, num2, divi(num1,num2));
}
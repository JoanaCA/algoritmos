#include <stdio.h>

int main() {
  
  
  int num;
  
  printf("Escribe un numero: \n");
  
  scanf("%d", &num);
  
  float quintaParte = num / 5.0;
  int resto = num % 5;
  float septimaDeQuinta = quintaParte / 7.0;
  
  printf("\n--- RESULTADOS ---\n");
    printf("El numero ingresado es: %d\n", num);
    printf("La quinta parte es: %.2f\n", quintaParte);
    printf("El resto de dividir por 5 es: %d\n", resto);
    printf("La septima parte de la quinta parte es: %.2f\n", septimaDeQuinta);
  
  return 0;
}
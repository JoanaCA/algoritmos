#include <stdio.h>
// Dado un triangulo representado por sus lados lado1, lado2, lado3, determinar e indicar segun corresponda: equilatero, isosceles o escalenos.
int main() {
	
	int a;
	int b;
	int c;
	
	printf("Ingrese un numero \n"); 
    scanf("%d", &a);
	
	printf("Ingrese un numero \n"); 
    scanf("%d", &b);
	
	printf("Ingrese un numero \n"); 
    scanf("%d", &c);
	
	if ((a + b > c) && (a + c > b) && (b + c > a)){
		
		if(a == b && b == c){
			printf("Es equilatero.");	
		} else {
			if (a != b && a != c && b != c){
				printf("Es escalenos.");
			} else {
				printf("Es isosceles.");
			}
		} 
		
	} else {
		
		printf("Error.");	
	}
	
  return 0;
}
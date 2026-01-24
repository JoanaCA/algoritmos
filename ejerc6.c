#include <stdio.h>

int main() {
	
	int a = 1;
	int b = 2;
	int c = 3;
	
	int mayor, medio, menor;
	
	if (a > b && a > c){
		mayor = a;
		
		if (b > c){
			medio = b;
			menor = c;
		} else {
			medio = c;
			menor = b;
		}
    }
	else if (b > a && b > c){
		mayor = b;
		
		 if (a > c){
			medio = a;
			menor = c;
		} else {
			medio = c;
			menor = a;
		}
	}
	else {
		mayor = c;
		
		if(a > b){
			medio = a;
			menor = b;			
		} else {
			medio = b;
			menor = a;
		}
	}
	
	printf("MENOR: %d\n", menor);
	printf("MEDIO: %d\n", medio);
	printf("MAYOR: %d\n", mayor);
  return 0;
}
#include <stdio.h>

//Dado un numero de 8 digitos que representa una fecha con formato aaaammdd, 
//se pide mostrar por separado el dia, mes y año de la ingresada.
int main() {
	
	int fecha = 20251227;
	
	int dia;
	int mes;
	int anio;
	
	int mesAux;
	
	anio = fecha / 10000; // 2025,
	
	dia = fecha % 100; // 27
	
	mesAux = fecha % 10000; // 1227
	
	mes = mesAux / 100; // 12,27

	printf("Dia es es: %d\n", dia);
	printf("Mes es es: %d\n", mes);
	printf("Anio es es: %d\n", anio);

	return 0;
}
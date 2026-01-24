#include <stdio.h>
/*Dada una terna de numeros naturales que representan 
el dia, mes, año de una determinada fecha informarla 
como un solo numero natural de 8 digitos(amd)*/

int main() {
	
	int dia = 23;
	int mes = 12;
	int anio = 2025;
	
	int fecha = 0; //inicializo con 0 para no arrastrar datos basura etc.
	
	fecha = anio;
	
	fecha = fecha * 100; // agrega espacio  para sumar el mes. Aca fecha vale 202500
	
	fecha = fecha + mes; // fecha vale 202512
	
	fecha = fecha * 100; // agrega espacio para sumarle dia. Aca fecha vale 20251200
	
	fecha = fecha + dia; // aca fecha valdria 20251223
	
	printf("La fecha es: %d\n", fecha);
	
    return 0;
} 
#include <stdio.h>

//Dadas dos fechas, informar cual es la mas reciente.
// Determinar cuales deben ser los datos de entrada y en que formato los debe ingresar el usuario.
//Nota: Considere que las fechas ingresadas pueden ser anteriores, posteriores o bien una podria ser anterior y la otra posterior a la fecha de actual.

int main() {
	
	int fechaUno = 0;
	int fechaDos = 0;
	
	printf("Ingrese la primera fecha(AAAAMMDD) \n"); 
  
    scanf("%d", &fechaUno);
	
	printf("Ingrese la segunda fecha(AAAAMMDD) \n"); 
  
    scanf("%d", &fechaDos);
	
	
	if(fechaUno > fechaDos){
		
		printf("La fecha mas reciente es: %d\n", fechaUno);
		
	} else if (fechaDos > fechaUno){
		
		printf("La fecha mas reciente es: %d\n", fechaDos);
		
	} else {
		
		printf("Son iguales.");
	}
  return 0;
}

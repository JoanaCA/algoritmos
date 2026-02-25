#include <iostream> 
#include <string>   
#include <cmath>   
using namespace std;
//Dados 50 numeros enteros, informar el promedio de los mayores que 100 y la suma de los menores que -10


int main(){

    int numero;
    int sumaMayores = 0;
    int cantidadMayores = 0;
    int sumaMenores = 0;
    double promedio;

    for (int i = 1; i <= 5; i++){

        cout << "Ingrese el numero" << ":" << i << endl;
        cin >> numero;

        if (numero > 100){

            sumaMayores = sumaMayores + numero;
            cantidadMayores++;
        } 
        
        if (numero < -10) {

            sumaMenores = sumaMenores + numero;
        }
    }

    if (cantidadMayores > 0){

        promedio = (double)sumaMayores/cantidadMayores; 
        cout << "El promedio es: " << promedio << endl; 

    } else{
        cout << "Error." << endl;
    }

    cout << "La suma es: " << sumaMenores << endl;

    return 0;
}



/* int contador;
contador = 0;
contador = contador + 1 // 1 contador++;
contador = contador + 1 // 2
contador = contador + 1 // 3

int acumulador;
acumulador = 0;
acumulador = acumulador + 100; // acumulador += 100
acumulador = acumulador + 30;  // acumulador += 30
acumulador = acumulador + 50;
acumulador = acumulador + 10; // acumulador += X
*/
#include <iostream> 
#include <string>   
#include <cmath>   

using namespace std;

// Se ingresa la edad de un socio de un club, se pide mostrar por pantalla alguna de las siguientes leyendas:
//"menor" si es menor o igual a 12.
//"cadete" si la edad esta comprendia entre 13 y 18.
//"juvenil" si la edad es mayor que 18 y no se supera los 26.
// "mayor" si no cumple ninguna de las condiciones anteriores.

int main(){

    int edad;
    cout << "Ingrese su edad" <<endl;
    cin >> edad;
    
    if (edad <= 12){
        cout << "Menor" <<endl;
    } else if (edad >= 13 && edad <=18) {
        cout << "Cadete" <<endl;
    } else if (edad > 18 && edad <= 26) {
        cout << "Juvenil" <<endl;
    } else {
        cout << "Mayor" <<endl;
    }
    return 0;
}
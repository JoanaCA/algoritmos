#include <iostream> 
#include <string>   
#include <cmath>   
using namespace std;
//Se ingresa un valor numerico entero, se pide calcular e informar su factorial.

int main(){

    int resultado = 1;
    int num;
    cout << "Ingrese su numero: " << endl;
    cin >> num;

    //3! = 3 *2 *1 = 6

    for (int i = 1; i <= num; i++){
        
        resultado = resultado * i;

        cout << "vuelta: " << i << " resultado: " << resultado << endl; 
    }
    
    cout << "----------------" << endl;
    cout << "El resultado es: " << resultado << endl;

    return 0;
}


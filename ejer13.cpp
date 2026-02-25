#include <iostream> 
#include <string>   
#include <cmath>   

using namespace std;

//Se ingresa un valor numerico entero n,
//Se pide desarrollar un algoritmo que muestre por consola los primeros n numeros naturales.

int main(){

    int n;
    cout << "Ingrese un numero" <<endl;
    cout << "-----------------" <<endl;
    cin >> n;

    for (int i = 1; i <= n ; i++){

        cout << "-----------------" <<endl;
        cout << i <<endl;
    }

    return 0;
}

#include <iostream> 
#include <string>   
#include <cmath>   
using namespace std;

//Dados dos valores numericos enteros, calcular e informar su producto mediante sumas sucesivas.

int main(){

    int producto = 0;

    int a, b;
    cout << "Ingrese un numero" <<endl;
    cin >> a;
    cout << "Ingrese otro numero" <<endl;
    cin >> b;

    for (int i = 1; i <= b; i++) {
       
        producto = producto + a;

        cout << "Vuelta " << i << ": suma es " << producto << endl;
    }

    cout << "El producto es: " << producto << endl;
    return 0;
}
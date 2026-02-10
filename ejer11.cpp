//Dados un mes y el año al que corresponde, 
//informar cuantos dias tiene el mes, considerando la posibilidad de que el año sea bisiesto.

#include <iostream> 
#include <string>   
#include <cmath>   

using namespace std;

bool esBis(int a){
    bool b;
    if (a%4 == 0)
    {
        b = true;
    } else {
        b = false;
    }
    return b;
}

int diasPorMes(int m, int a){

    int x;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
       x = 31; 
    } else {
        if (m == 4 || m == 6 || m == 9 || m == 11){
            x = 30;
        } else {
            if (esBis(a)){
                x = 29;
            } else {
                x = 28;
            }   
        }   
    }
    return x;
}

int main() {

    int mes, anio;
    cout << "Ingrese un mes" <<endl;
    cin >> mes;
    cout << "Ingrese un año" <<endl;
    cin >> anio;

    int dias = diasPorMes(mes, anio);

    cout << mes << " tiene " << dias << " dias ";

    return 0;
}


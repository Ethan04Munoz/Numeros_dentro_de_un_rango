#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
using namespace std; 

/*Esta versión aún no pide los datos de los rangos ni el número que desea, funciona con valores predeterminados*/

int main(){
    cout << "Hola! Este programa fue hecho por Ethan Munoz Lopez!\n\n\n";
    string numero;
    string letra;        
    int sumador = 0;
    int contador = 0;
    for (int i = 1; i <= 2021; i++) {
        sumador = 0;
        numero = to_string(i); /*Comprobado*/
        for (int k = 0; k < numero.size(); k++) {
            letra = numero[k]; /*Obtenemos el numero del indice j*/
            //cout << letra << "\n"; /*La obtención de las letras funciona*/
            int a = stoi(letra); /*Lo convertimos a numero*/ /*Funciona*/
            sumador = sumador + a; /*Aqui se van a sumar todos los numeros cuando se halla recorrido todo el for*/
        }
        if (sumador == 15) {
            cout << "El numero " << numero << " da resultado 15\n";
            contador++;
        }
    }
    cout << "El total de números es: " << contador << "\nMuchas gracias por usar este programa!\n\n";
    return 0;
}

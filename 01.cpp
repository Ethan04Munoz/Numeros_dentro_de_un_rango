#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>
using namespace std; 


int main(){
    cout << "Hello World!\n";
    string numero;
    char numeros[5];
    int char1 = 0, char2 = 0, char3 = 0, char4 = 0;

    for (int i = 1; i <= 2021; i++) {
        int sumador = 0;
        numero = i;
        int tamFrase = std::string(numero).size();

        for (int j = 0; j < tamFrase; j++) {
            numeros[j] = numero[j];
            if (j == 0) {
                char1 = numeros[j]-48;
            }
            if (j == 1) {
                char2 = numeros[j] - 48;
            }
            if (j == 2) {
                char3 = numeros[j] - 48;
            }
            if (j == 3) {
                char4 = numeros[j] - 48;
            }
        }
        sumador = sumador + char1 + char2 + char3 + char4;
        if (sumador == 15) {
            cout << i << "\n";
        }
    }
    return 0;
}

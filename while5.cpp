//Suma de Números Pares Pide un número N al usuario y usa while 
//para calcular la suma de los números pares desde 1 hasta N.
// Suma de Números Pares
// Pide un número N al usuario y usa while para calcular la suma de los números pares desde 1 hasta N.
#include <iostream>
using namespace std;
int main()
{
    int N;
    int suma = 0;
    int contador = 1;
    cout << "Ingresa un numero Limite (N)" << endl;
    cin >> N;
    while (N >= contador )
    {
        if (contador % 2 == 0){
            suma += contador;
            
        }
        contador++;
    }
    
        cout << " La suma de los numeros pares hasta N es:" << suma<< endl;

    
    return 0;
}
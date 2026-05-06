#include <iostream>
#include <string>

using namespace std;

int main() {
    int mes;

    cout << "SIgnos" << endl;
    cout << "Hola,puedes decirme en que mes naciste parceritoSosio" << endl;
    cout << "Porfa, usa el numero del mes (1 al 12) no mas que eso parceritoSosio po que si no se equivoca: ";
    cin >> mes;

    cout << "\nResultado: ";

    //segun esto solo es de repetir hasta finalizar los meses asi que solo copio y pego no se te olvide
    if (mes == 1) {
        cout << "Eres Capricornio o Acuario" << endl;
    } 
    else if (mes == 2) {
        cout << "Eres Acuario o Piscis (soy ese we)" << endl;
    } 
    else if (mes == 3) {
        cout << "Eres Piscis o Aries" << endl;
    } 
    else if (mes == 4) {
        cout << "Eres Aries o Tauro" << endl;
    } 
    else if (mes == 5) {
        cout << "Eres Tauro o Geminis" << endl;
    } 
    else if (mes == 6) {
        cout << "Eres Geminis o Cancer" << endl;
    } 
    else if (mes == 7) {
        cout << "Eres Cancer o Leo" << endl;
    } 
    else if (mes == 8) {
        cout << "Eres Leo o Virgo" << endl;
    } 
    else if (mes == 9) {
        cout << "Eres Virgo o Libra" << endl;
    } 
    else if (mes == 10) {
        cout << "Eres Libra o Escorpio" << endl;
    } 
    else if (mes == 11) {
        cout << "Eres Escorpio o Sagitario" << endl;
    } 
    else if (mes == 12) {
        cout << "Eres Sagitario o Capricornio" << endl;
    } 
    else {
        // por si la persona que ocupe el coso pone unnumero nada que ver
        cout << "ño,ño hay numeros de ese mes(solo hay 12 parceritoSosio)" << endl;
    }

    cout << "yeah" << endl;
    
    return 0;
}
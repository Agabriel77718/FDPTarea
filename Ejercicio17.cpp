#include <iostream>
using namespace std;
//Sistema de Transporte Público Pide un tipo de transporte (1 = Bus, 2 = Metro, 3 = Taxi) y muestra el costo estimado de un viaje.
//costo fijo, nada de costo por distancia 
int main(){
int transporte, opcion;
 float precio = 0.0;
 // mostrar las opciones iniciales 
cout <<"Bienvenido,porfavor elige tu opcion de transporte preferida"<<endl;


if (transporte != 1 && transporte != 2) {
        cout << "opcion no valida." << endl;
        return 1;

}
switch (transporte){
case 1:
cout <<"elige tu transporte"<<endl;
cout <<"1. bus (0.30)"<<endl;
cout <<"2. taxi(4.00)"<<endl;
cout <<"3. metro(2.00)"<<endl;
cout <<"opcion";
cin>> opcion;

if (opcion== 1) {
    precio = 0.30;
}
else if (opcion == 2) {
            precio = 4.00;
        }
        else if (opcion == 3) {
            precio = 2.00;
        }
            else {
            cout << "Opción de bebida no válida." << endl;
            return 0;

}

}

}
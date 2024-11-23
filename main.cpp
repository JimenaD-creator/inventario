#include <iostream>
#include "inventario.h"
#include "History.h"
using namespace std;

int main(){
    Inventory inventory;
    History history;
    string name = "audifonos";
    int choice;
    do{
        cout << "Inventario Nozama 2024" <<endl;
        cout << "1. Agregar un producto: " <<endl;
        cout << "5. Salir del inventario: " <<endl;
        cout << "Elige una opcion: ";
        cin >> choice;

        string nombre;
        int cantidad;

        switch(choice){
            case 1:
                cout << "Nombre del producto: " <<endl;
                cin >> nombre; 
                cout << "Cantidad: " <<endl;
                cin >> cantidad;
                inventory.addProduct(nombre, cantidad);
                history.addRecord(nombre);
                break;
            case 5:
                cout << "Saliendo del historial" << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;

        }

    }while(choice != 5);

    
}
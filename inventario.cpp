#include "inventario.h"

void Inventory::addProduct(string& name, int quantity){
    products[name] += quantity; //Generacion de elementos con el nombre

}
int Inventory::getProduct(string& name){
    auto id = products.find(name);
    if(id != products.end()){ //Itera para cada elemento
        return id -> second; //Regresar el segundo valor, entero del producto
    } 
    return -1;

}
bool Inventory::removeProduct(string& name){
    return products.erase(name) > 0;

}
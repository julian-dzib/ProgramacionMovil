#include <iostream>
#include "../models/Producto.h"
#include "ProductoService.h"

using namespace std;

//Declarar mis variables globales
const int limite = 10;
Producto prooductos [limite];

int totalProductos = 0;

//Funciones de mi servicio
//CRUD
//CREATE
void ProductoService::agregarProducto(){

    //Validar que no se pase del limite
    if(totalProductos>=limite){
        cout<<"No se pueden agregar mas productos"<<endl;
        return;
    }

    //Pedir los datos del producto
    //Agregar el producto al arreglo de objetos
    cout<<"--Registrar Producto--"<<endl;
    //Pedir id del producto
    cout<<"Id: ";
    cin>>prooductos[totalProductos].id;
    //Pedir nombre del producto
    cin.ignore(); //Limpiar el buffer de entrada

    cout<<"Nombre: ";   
    getline(cin,prooductos[totalProductos].nombre);


    //Pedir precio del producto 
    cout<<"Precio: ";
    cin>>prooductos[totalProductos].precio;

    //Pedir fecha de caducidad del producto
    cout<<"Fecha de caducidad: ";
    //anio
    cout<<"Anio: ";
    cin>>prooductos[totalProductos].fechaCaducidad.anio;
    //mes
    cout<<"Mes: ";
    cin>>prooductos[totalProductos].fechaCaducidad.mes;
    //dia
    cout<<"Dia: ";
    cin>>prooductos[totalProductos].fechaCaducidad.dia;

    totalProductos++;
}
//READ ALL
void ProductoService::mostrarProductos(){

}


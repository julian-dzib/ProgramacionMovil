#include <iostream>
#include "../models/Producto.h"
#include "ProductoService.h"
#include <vector>

using namespace std;

//Declarar mis variables globales
//const int limite = 10;
//Producto prooductos [limite];

//int totalProductos = 0;

//Funciones de mi servicio
//CRUD
//CREATE
void ProductoService::agregarProducto(vector<Producto>& productos){

    

    Producto nuevoProducto;
    //Validar que no se pase del limite
    //if(totalProductos>=limite){
        //cout<<"No se pueden agregar mas productos"<<endl;
        //return;
    //}

    //Pedir los datos del producto
    //Agregar el producto al arreglo de objetos
    cout<<"--Registrar Producto--"<<endl;
    cin.ignore(); //Limpiar el buffer de entrada
    //Pedir id del producto
    cout<<"Id: ";
    //cin>>nuevoProducto.id;
    getline(cin, nuevoProducto.id);
    //Pedir nombre del producto
   

    cout<<"Nombre: ";   
    getline(cin,nuevoProducto.nombre);


    //Pedir precio del producto 
    cout<<"Precio: ";
    cin>>nuevoProducto.precio;

    //Pedir fecha de caducidad del producto
    cout<<"Fecha de caducidad: ";
    //anio
    cout<<"Anio: ";
    cin>>nuevoProducto.fechaCaducidad.anio;
    //mes
    cout<<"Mes: ";
    cin>>nuevoProducto.fechaCaducidad.mes;
    //dia
    cout<<"Dia: ";
    cin>>nuevoProducto.fechaCaducidad.dia;

    //totalProductos++;
    //Agregar el producto al vector de productos
    productos.push_back(nuevoProducto);
}
//READ ALL
void ProductoService::mostrarProductos(const vector<Producto>& productos){
    if(productos.empty()){
        cout<<"El vector de productos esta vacio"<<endl;
        return;
    }

    cout<<"--Productos registrados actualmente--"<<endl;
    for(int i=0;i<productos.size();i++){
        cout <<"Producto: " << i + 1 << endl;
        cout<<"Id: "<<productos[i].id<<endl;
        cout<<"Nombre: "<<productos[i].nombre<<endl;
        cout<<"Precio: "<<productos[i].precio<<endl;
        cout<<"Fecha de caducidad: "
            <<productos[i].fechaCaducidad.dia<<":"
            <<productos[i].fechaCaducidad.mes<<":"
            <<productos[i].fechaCaducidad.anio<<":";

    
    }
}

void ProductoService::eliminarProducto(vector<Producto>& productos, const string& id){
    for(int i=0; i<productos.size(); i++){
        if(productos[i].id==id){
            productos.erase(productos.begin()+i);
            cout<<"Producto eliminado exitosamente"<<endl;
            return;

        }
    }
}


void ProductoService::buscarProductoId(const vector<Producto>& registro, const string& id){
    if(registro.empty()){
        cout<<"El vector de productos esta vacio"<<endl;
        return;
    }
    for(int i=0; i<registro.size(); i++){
        if(registro[i].id==id){
        cout <<"Producto Encontrado: " << i + 1 << endl;
        cout<<"Id: "<<registro[i].id<<endl;
        cout<<"Nombre: "<<registro[i].nombre<<endl;
        cout<<"Precio: "<<registro[i].precio<<endl;
        cout<<"Fecha de caducidad: "
            <<registro[i].fechaCaducidad.dia<<":"
            <<registro[i].fechaCaducidad.mes<<":"
            <<registro[i].fechaCaducidad.anio<<":";

        }
    }

}


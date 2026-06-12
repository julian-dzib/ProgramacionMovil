#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include "Fecha.h"
using namespace std;
struct Producto
{
/*
    Estructura de mi producto
    id: cadena: P01
    nombre: cadena: Galletas 
    precio: numero enteo : 10
    fecha de caducidad: estructura: dia/mes/anio
    */

    string id;
    string nombre;
    int precio;
    Fecha fechaCaducidad;
    /* data */


    //definir un metodo - mostrar los datos del producto
    void mostrar () const {
        //LLamar a sus atributos
    }
    

};

#endif // PRODUCTO_H


#ifndef MATERIALES_H
#define MATERIALES_H

#include <string>
#include "Fecha.h"
using namespace std;
struct Materiales
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
    

};

#endif // PRODUCTO_H


#ifndef PRODUCTO_SERVICE_H
#define PRODUCTO_SERVICE_H


#include "../models/Producto.h"
#include <vector>
using namespace std;

class ProductoService{
    public: 
        static void agregarProducto(vector<Producto>& productos); //CREATE
        static void mostrarProductos(const vector<Producto>& productos); //READ
        static void eliminarProducto(vector<Producto>& productos, const string& id); //DELETE

        static void buscarProductoId(const vector<Producto>& registro, const string& id);

};

#endif // PRODUCTO_SERVICE_H
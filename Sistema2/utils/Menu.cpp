//Mostrar
///decision


switch (opcion) {
    case 1: 
    //Gestion de productos
        //Llamar a la funcion de agregar producto
        //crear una instancia de mi structura producto

        //crear
        //buscar
        //mostrar
        //delete
        break;
    case 2://Gestionar materiales
        //crear una instancia de mi structura producto
        //llamr al servicio generico
        GenericSeevice<Materiales>::agregar(param1, param2);

      //Llamar a la funcion de agregar producto
        //crear
        //buscar
        //mostrar
        //delete

        //Llamar a la funcion de mostrar productos
        break;
    case 3:
        //Llamar a la funcion de eliminar producto
        break;
    case 4:
        //Llamar a la funcion de modificar producto
        break;
    default:
        cout << "Opcion no valida" << endl;
        break;
}
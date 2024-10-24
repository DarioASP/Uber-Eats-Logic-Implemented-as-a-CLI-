/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Definicion del constructor y del metodo para imprimir
*/
#include "Envio.h"
Envio::Envio(){

}
//constructor
Envio::Envio(std::string pa,std::string nom,std::string ca,std::string num,std::string cp,std::string tel){
    Pais=pa;
    NombreCompleto=nom;
    Calle=ca;
    Numero=num;
    CP=cp;
    telefono=tel;
}
//impresion
std::string Envio::to_string(){
    return "Los datos de tu envio son: "+NombreCompleto+", hacia "+Pais+", "+Calle+", "+"numero "+Numero+
    ", codigo postal "+CP+", numero telefonico "+telefono;
}
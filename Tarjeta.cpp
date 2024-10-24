/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Definicion del constructor y del metodo que imprime el objeto
*/
#include "Tarjeta.h"
Tarjeta::Tarjeta(){

}
//constructor
Tarjeta::Tarjeta(std::string nomtit,std::string numTar,std::string cvv,std::string ven){
    Nombretitular=nomtit;
    Numerotarjeta=numTar;
    CVV=cvv;
    FechaVenc=ven;
}
//impresion
std::string Tarjeta::to_string(){
    return "El pago se realiza a nombre de: "+Nombretitular+", con tarjeta de numeros: "+Numerotarjeta+", codgio CVV de: "+CVV+" y una fecha de vencimiento de: "+FechaVenc+"\n";

}
/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Definir que hacen los metodos de la clase hamburguesa
*/
#include "Hamburguesa.h"
//constructor vacio
Hamburguesa::Hamburguesa(){

}
//constructor de hamburguesa
Hamburguesa::Hamburguesa(std::string c,std::string p, std::string ade, std::string lech ){
    Carne=c;
    Pan=p;
    Aderezos=ade;
    Lechuga=lech;
}
//metodo que permite poder imprimir el objeto
std::string Hamburguesa::to_string(){
return "Tu hamburguesa incluye pan de "+Pan+" carne "+Carne+" con "+Aderezos+" y lechuga "+Lechuga+"\n";
}
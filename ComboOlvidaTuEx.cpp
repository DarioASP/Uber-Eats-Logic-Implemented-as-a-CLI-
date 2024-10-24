/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Definicon de los metodos, los constructores utlizando los metodos de la clase padre
*/
#include "ComboOlvidaTuEx.h"
ComboOlvidaTuEx::ComboOlvidaTuEx(){

}
//Constructor de COmboOlvidaTuEx que utiliza el constructor de la clase padre
ComboOlvidaTuEx::ComboOlvidaTuEx(Hamburguesa bur, std::string ref, std::string paps,std::string cer,std::string he, std::string n):ComboChico(bur,ref,paps){
    cerveza=cer;
    Helado=he;
    Nuggets2=n;
}
//Metodo que permite imprimir el objeto utlizando tambien el metodo de la clase padre para imprimir
std::string ComboOlvidaTuEx::to_string(){
    mostrarcombo();
    return "Estas triste por eso te llevas una cerveza "+cerveza+" con helado ahogado en whisky sabor "+Helado+" y nuggets de "+Nuggets2+"\n";
}
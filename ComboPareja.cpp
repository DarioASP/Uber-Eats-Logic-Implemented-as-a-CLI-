/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Definicion de los metodos de la clase ComboPareja
*/
#include "ComboPareja.h"
ComboPareja::ComboPareja(){

}
//constructor de la clase nueva utlizando el de la clase padre tambien
ComboPareja::ComboPareja(Hamburguesa bur, std::string ref , std::string paps ,Hamburguesa bur2,std::string ref2, std::string paps2, std::string nug ):ComboChico(bur,ref,paps){
    burger2=bur2;
    refresco2=ref2;   
    saborPapitas2=paps2;
    Nuggets=nug;
}

//metodo que permite imprimir al objeto y que utliza el metodo de la clase padre para imprimir cada combo
std::string ComboPareja::to_string(){
    mostrarcombo();
    return "Como eres feliz te agregamos:"+burger2.to_string()+", "+refresco2+", unas papas "+saborPapitas2+" y nuggets "+Nuggets+"\n";
}

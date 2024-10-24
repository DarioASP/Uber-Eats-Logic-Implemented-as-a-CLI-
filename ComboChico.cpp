/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Se definen que hacen los constructores de los combos que usaran las clases hijas
*/
#include "ComboChico.h"
ComboChico::ComboChico(){

}
ComboChico::ComboChico(Hamburguesa bur, std::string ref, std::string paps ){
    burger=bur;
    refresco=ref;
    saborPapitas=paps;
}

//metodo que permite imprimir el objeto
std::string ComboChico::to_string(){
  return "Tu combo contiene "+burger.to_string()+" con "+refresco+ " y papas de "+saborPapitas;
}
//definicion de setters y getters
Hamburguesa ComboChico::getburger(){
  return burger;
}

std::string ComboChico::getrefresco(){
  return refresco;
}
std::string ComboChico::getsaborPapitas(){
  return saborPapitas;
}
//metodo que pueden heredar todas las clases hijas para imprimir los combos
void ComboChico::mostrarcombo(){
  std::cout<<"Tu combo contiene "<<burger.to_string()<<" con "<<refresco<< " y papas de "<<saborPapitas<<std::endl;
}



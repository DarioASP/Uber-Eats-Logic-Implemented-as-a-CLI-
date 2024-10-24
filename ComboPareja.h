/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Creacion de la clase ComboPareja utilizando los metodos de la clase padre
*/
#include <string>
#include "ComboChico.cpp"

class ComboPareja: public ComboChico{
  //Atributos de la nueva clase con los metodos de la clase padre
  private:
    Hamburguesa burger2; 
    std::string refresco2;
    std::string saborPapitas2;
    std::string Nuggets;

  public://constructor de la clase hija que utiliza tambien el constructor de la clase padre
  ComboPareja();
  ComboPareja(Hamburguesa,std::string, std::string,Hamburguesa, std::string, std::string, std::string);
  std::string to_string();
};
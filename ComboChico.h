/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Se define la clase padre ComboChico, y utliza el objeto de la clase hamburguesa 
tambien se incluyen los archivos que van a heredar las futuras clases
*/
#include <string>
#include <iostream>
#include "Hamburguesa.cpp"
//atributos de ComboChico
class ComboChico{
  private:
    Hamburguesa burger;
    std::string refresco;
    std::string saborPapitas;
//Metodos de construccion para crear los combos que usaran todas las clases hijas, junto con setters y getters
  public:
  ComboChico();
  ComboChico(Hamburguesa, std::string, std::string);
  std::string to_string();
  Hamburguesa getburger();
  std::string getrefresco();
  std::string getsaborPapitas();
  void mostrarcombo();
};
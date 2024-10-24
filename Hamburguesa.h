/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Declarar la clase hamburguesa con sus respectivos atributos y metodos, la cual se utlizara para la clase combochico
*/

#include <string>
//atributos que componen la clase
class Hamburguesa{
  private:
    std::string Carne;
    std::string Pan;
    std::string Aderezos;
    std::string Lechuga;

// definicion del constructor
  public:
    Hamburguesa();
    Hamburguesa(std::string,std::string,std::string,std::string);
    std::string to_string();
    

};
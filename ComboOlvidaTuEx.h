/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Creacion de la clase ComboOlvidaTuEx y hereda los metodos de combochico
*/
#include <string>
#include "ComboPareja.cpp"

class ComboOlvidaTuEx : public ComboChico
{
private:
  std::string cerveza;
  std::string Helado;
  std::string Nuggets2;

public:
  ComboOlvidaTuEx();
  ComboOlvidaTuEx(Hamburguesa, std::string, std::string, std::string, std::string, std::string);
  std::string to_string();
};
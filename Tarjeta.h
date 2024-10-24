/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Creacion de la clase tarjeta para guardar las tarjetas del usuario
*/
#include <string>
class Tarjeta{
    //atributos para crear el constructor de la clase
    private:
    std::string Nombretitular;
    std::string Numerotarjeta;
    std::string CVV;
    std::string FechaVenc;
    public:
    //metodos que crean el objeto y lo imprimen
    Tarjeta();
    Tarjeta(std::string,std::string,std::string,std::string);
    std::string to_string();

    };
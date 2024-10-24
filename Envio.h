/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Creacion de la clase Envio para guardar los envios en el main
*/
#include <string>
class Envio{
//atributos de la clase envio que se utlizaran para el constructor
    private:
    std::string Pais;
    std::string NombreCompleto;
    std::string Calle;
    std::string Numero;
    std::string CP;
    std::string telefono;

// metodos de la clase para construir el objeto y para poderlo imprimir
    public:
    Envio();
    Envio(std::string,std::string,std::string,std::string,std::string,std::string);
    std::string to_string();
};
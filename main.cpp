/*
Autores: Dario Alberto Sanchez Perzabal, Aristides Nieto Guzman
Fecha: 27/11/2023
Proposito del archivo: Se llaman las clases independientes y la clase padre
Se crea el diseño que ve el usuario utlizando todas las clases, y vectores
Se simula el funcionamiento de una aplicacion como Ubereats
*/
#include "ComboOlvidaTuEx.cpp"
#include <vector>
#include "Envio.cpp"
#include "Tarjeta.cpp"

using namespace std;
string hamburguesa, carne, precio, pan, eliminar, r, aderezo, lechuga, pregunta, refresco, papas, decision,
    refresco2, papas2, nuggets, helado, cerveza, rcombo, pais, nombre, calle,
    numeroExt, codigo, tel, nombretarjeta, numerotarjeta, cvv, fechavec, pago, llegada;
int contador = 0;

vector<ComboChico> CombosChicos;
vector<ComboPareja> CombosPareja;
vector<ComboOlvidaTuEx> CombosOlvidadores;
vector<Envio> Envios;
vector<Tarjeta> Tarjetas;
int main()
{
    r = "-.1";
    while (r == "-.1")
    {
        cout << "---Bienvenido a Daristides' Cousine--" << endl;
        cout << "Presiona 1 para agregar un combo :" << endl;
        cout << "Presiona 2 para eliminar un combo :" << endl;
        cout << "Presiona 3 para imprimir todos los combos en tu carrito: " << endl;
        cout << "Presiona 4 para registrar tus datos de envio." << endl;
        cout << "Presiona 5 para ver tus datos de envio registrados." << endl;
        cout << "Presiona 5.1 para eliminar una direccion registrada." << endl;
        cout << "Presiona 6 para registrar tu tarjeta." << endl;
        cout << "Presiona 6.1 para eliminar una tarjeta registada." << endl;
        cout << "Presiona 7 para ver tus tarjetas registradas" << endl;
        cout << "Presiona 8 para finalizar tu pedido." << endl;
        cout << "Presiona 0 para salir " << endl;
        getline(cin, r);
        while (r != "1" && r != "2" && r != "3" && r != "4" && r != "5" && r != "5.1" && r != "6" && r != "6.1" && r != "7" && r != "8" && r != "0")
        {
            cout << "Solo puedes ingresar las opciones disponibles, ingresa tu numero de nuevo." << endl;
            getline(cin, r);
        };
        if (r == "1")
        {
            cout << "Primero vamos a hacer la hamburguesa de tu preferencia" << endl;
            cout << "Elige tu carne: res, cerdo o pollo " << endl;
            getline(cin, carne);
            cout << "Elige tu pan: Brioche, Multigrano, Ajo o Artesanal" << endl;
            getline(cin, pan);
            cout << "Elige tu aderezo puedes elegir hasta 3: Catsup, Mayonesa y Mostaza " << endl;
            getline(cin, aderezo);
            cout << "Que lechuga prefieres: Italiana o Romana" << endl;
            getline(cin, lechuga);
            Hamburguesa h1(carne, pan, aderezo, lechuga);
            cout << h1.to_string();
            cout << "Que combo prefieres para tu hamburguesa, presiona el numero a elegir: " << endl;
            cout << "1. Combo chico (refresco y papas) $130.00" << endl;
            cout << "2. Combo Pareja (otra haburguesa, refresco, papas y nuggets) $250.00" << endl;
            cout << "3. Combo Olvida tu ex (cerveza, helado y nuggets) $249.00" << endl;
            getline(cin, pregunta);
            while (pregunta != "1" && pregunta != "2" && pregunta != "3")
            {
                cout << "Solo puedes elegir los numeros de los combos disponibles, vuelve a ingresar tu numero " << endl;
                getline(cin, pregunta);
            };
            if (pregunta == "1")
            {
                cout << "Que refresco deseas: Coca, Pepsi, Sprite, Sidral " << endl;
                getline(cin, refresco);
                cout << "Como prefieres tus papas: Con queso, BBQ, con tocino, con ajo" << endl;
                getline(cin, papas);
                ComboChico c1(h1, refresco, papas);
                cout << "Muy bien, haz creado tu combo" << endl;
                cout << c1.to_string();
                CombosChicos.push_back(c1);
            };
            if (pregunta == "2")
            {
                cout << "Para tu pareja deseas la misma hamburguesa o deseas personalizar otra" << endl;
                cout << "Presiona 1 para la misma hamburguesa o presiona 2 para para personalizar otra" << endl;
                getline(cin, decision);
                while (decision != "1" && decision != "2")
                {
                    cout << "Decision invalida, solo puedes ingresar 1 o 2, vuelve a ingresar tu decision " << endl;
                    getline(cin, decision);
                };
                if (decision == "1")
                {
                    cout << "Sabor del primer refresco: Coca, Pepsi, Sprite, Sidral" << endl;
                    getline(cin, refresco);
                    cout << "Sabor del segundo refresco: Coca, Pepsi, Sprite, Sidral" << endl;
                    getline(cin, refresco2);
                    cout << "Como prefieres tus primeras papas: Con queso, BBQ, con tocino, con ajo" << endl;
                    getline(cin, papas);
                    cout << "Como prefieres tus segundas papas: Con queso, BBQ, con tocino, con ajo" << endl;
                    getline(cin, papas2);
                    cout << "Como quieres tus nuggets: Pollo parmesano y ajo, con mostaza y miel, con salsa buffalo o con salsa teriyali. " << endl;
                    getline(cin, nuggets);
                    ComboPareja pareja(h1, refresco, papas, h1, refresco2, papas2, nuggets);
                    cout << "Haz creado el combo pareja";
                    cout << pareja.to_string();
                    CombosPareja.push_back(pareja);
                };
                if (decision == "2")
                {
                    cout << "Primero vamos a hacer la segunda hamburguesa " << endl;
                    cout << "Elige la carne: res, cerdo o pollo " << endl;
                    getline(cin, carne);
                    cout << "Elige el pan: Brioche, Multigrano, Ajo o Artesanal" << endl;
                    getline(cin, pan);
                    cout << "Elige el aderezo puedes elegir hasta 3: Catsup, Mayonesa y Mostaza " << endl;
                    getline(cin, aderezo);
                    cout << "Que lechuga prefieres: Italiana o Romana" << endl;
                    getline(cin, lechuga);
                    Hamburguesa h2(carne, pan, aderezo, lechuga);
                    cout << "Sabor del primer refresco: Coca, Pepsi, Sprite, Sidral" << endl;
                    getline(cin, refresco);
                    cout << "Sabor del segundo refresco: Coca, Pepsi, Sprite, Sidral" << endl;
                    getline(cin, refresco2);
                    cout << "Como prefieres tus primeras papas: Con queso, BBQ, con tocino, con ajo" << endl;
                    getline(cin, papas);
                    cout << "Como prefieres tus segundas papas: Con queso, BBQ, con tocino, con ajo" << endl;
                    getline(cin, papas2);
                    cout << "Como quieres tus nuggets: Pollo parmesano y ajo, con mostaza y miel, con salsa buffalo o con salsa teriyaki. " << endl;
                    getline(cin, nuggets);
                    ComboPareja pareja(h1, refresco, papas, h2, refresco2, papas2, nuggets);
                    cout << "Haz creado el combo pareja";
                    cout << pareja.to_string();
                    CombosPareja.push_back(pareja);
                };
            };
            if (pregunta == "3")
            {
                cout << "Elige tu cerveza: Indio, Bohemia, Modelo Especial o Sol " << endl;
                getline(cin, cerveza);
                cout << "De que sabor deseas tu helado: Vainilla, Chocolate, Galleta o Fresa. " << endl;
                getline(cin, helado);
                cout << "Sabor del refresco de 355ml: Coca, Pepsi, Sprite, Sidral o Fanta" << endl;
                getline(cin, refresco);
                cout << "Como prefieres tus papas: Con queso, BBQ, con tocino, con ajo" << endl;
                getline(cin, papas);
                cout << "Como quieres tus nuggets: Pollo parmesano y ajo, con mostaza y miel, con salsa buffalo o con salsa teriyaki.  " << endl;
                getline(cin, nuggets);
                ComboOlvidaTuEx olvidador(h1, refresco, papas, cerveza, helado, nuggets);
                cout << "Muy bien, haz creado tu combo, espero y te sientas mejor." << endl;
                cout << olvidador.to_string();
                CombosOlvidadores.push_back(olvidador);
            };
            r = "-.1";
            cout << endl;
        };
        if (r == "2")
        {
            cout << "Que tipo de combo quieres eliminar " << endl;
            cout << "Presiona 1 para Combo Chico, 2 para Combo Pareja, 3 para Combo Olvida tu ex." << endl;
            getline(cin, rcombo);
            while (rcombo != "1" && rcombo != "2" && rcombo != "3")
            {
                cout << "Solo puedes elegir 1, 2 o 3. Vuelve a introducir tu respuesta " << endl;
                getline(cin, rcombo);
            };
            if (rcombo == "1")
            {
                cout << "Presiona la posicion del Combo Chico que quieres eliminar " << endl;
                getline(cin, eliminar);
                if (stoi(eliminar) >= 0 && stoi(eliminar) < CombosChicos.size())
                {
                    CombosChicos.erase(CombosChicos.begin() + stoi(eliminar));
                    cout << "El Combo Chico en la posicion " << eliminar << " ha sido removido " << endl;
                };
                r = "-.1";
                cout << endl;
            };
            if (rcombo == "2")
            {
                cout << "Presiona la posicion del Combo Pareja que quieres eliminar " << endl;
                getline(cin, eliminar);
                if (stoi(eliminar) >= 0 && stoi(eliminar) < CombosPareja.size())
                {
                    CombosPareja.erase(CombosPareja.begin() + stoi(eliminar));
                    cout << "El Combo Pareja en la posicion " << eliminar << " ha sido removido " << endl;
                };
                r = "-.1";
                cout << endl;
            };
            if (rcombo == "3")
            {
                cout << "Presiona la posicion del Combo Olvida Tu Ex que quieres eliminar " << endl;
                getline(cin, eliminar);
                if (stoi(eliminar) >= 0 && stoi(eliminar) < CombosOlvidadores.size())
                {
                    CombosOlvidadores.erase(CombosOlvidadores.begin() + stoi(eliminar));
                    cout << "El Combo Olvida Tu Ex en la posicion " << eliminar << " ha sido removido " << endl;
                };
                r = "-.1";
                cout << endl;
            };
        };
        if (r == "3")
        {
            cout << "---Tu carrito dispone de los siguientes combos---" << endl;
            if (CombosChicos.size() > 0)
            {
                cout << "---Combos Chicos--" << endl;
                for (int i = 0; i < CombosChicos.size(); i++)
                {
                    cout << i << " |" << CombosChicos[i].to_string() << endl;
                };
            };
            if (CombosPareja.size() > 0)
            {
                cout << "---Combos Pareja--" << endl;
                for (int i = 0; i < CombosPareja.size(); i++)
                {
                    cout << i << " |" << CombosPareja[i].to_string() << endl;
                };
            };
            if (CombosOlvidadores.size() > 0)
            {
                cout << "---Combos Olvida Tu Ex--" << endl;
                for (int i = 0; i < CombosOlvidadores.size(); i++)
                {
                    cout << i << " |" << CombosOlvidadores[i].to_string() << endl;
                };
            };
            r = "-.1";
            cout << endl;
        };
        if (r == "4")
        {
            cout << "Puedes agregar varias direcciones de envio de tu preferencia." << endl;
            cout << "Escribe tu pais." << endl;
            getline(cin, pais);
            cout << "Escribe tu nombre completo" << endl;
            getline(cin, nombre);
            cout << "Escribe la calle." << endl;
            getline(cin, calle);
            cout << "Teclea el numero exterior." << endl;
            getline(cin, numeroExt);
            cout << "Teclea tu codigo postal." << endl;
            getline(cin, codigo);
            cout << "Teclea tu numero de telefono." << endl;
            getline(cin, tel);
            cout << "Haz aregado exitosamente tus datos de envio." << endl;
            Envio envio(pais, nombre, calle, numeroExt, codigo, tel);
            Envios.push_back(envio);
            r = "-.1";
            cout << endl;
        };
        if (r == "5")
        {
            if (Envios.size() > 0)
            {
                cout << "---Tus datos de envio registrados son los siguientes---" << endl;
                for (int i = 0; i < Envios.size(); i++)
                {
                    cout << i << " |" << Envios[i].to_string() << endl;
                };
            };
            r = "-.1";
            cout << endl;
        };
        if (r == "5.1")
        {
            if (Envios.size() >= 0)
            {
                cout << "Para eliminar una direccion de envio registrada teclea la posicion del envio a eliminar." << endl;
                getline(cin, eliminar);
                if (stoi(eliminar) >= 0 && stoi(eliminar) < Envios.size())
                {
                    Envios.erase(Envios.begin() + stoi(eliminar));
                    cout << "La direccion de envio en la posicion " << eliminar << " ha sido removida " << endl;
                };
            };
            if (Envios.size() < 0)
            {
                cout << "Aun no haz registrado ninguna direccion." << endl;
            };
            r = "-.1";
            cout << endl;
        };
        if (r == "6")
        {
            cout << "Ingresa el nombre del titular como figura en la tarjeta." << endl;
            getline(cin, nombretarjeta);
            cout << "Ingresa el numero de la tarjeta como figura en ella." << endl;
            getline(cin, numerotarjeta);
            cout << "Ingresa el CVV de la tarjeta (es el numero de tres digitos que aparece en la parte trasera de tu tarjeta)." << endl;
            getline(cin, cvv);
            cout << "Ingresa la fecha de vencimiento con el formato mes/año." << endl;
            getline(cin, fechavec);
            cout << "Haz ingresado tu tarjeta correctamente." << endl;
            Tarjeta t1(nombretarjeta, numerotarjeta, cvv, fechavec);
            Tarjetas.push_back(t1);
            r = "-.1";
            cout << endl;
        };
        if (r == "6.1")
        {
            if (Tarjetas.size() >= 0)
            {
                cout << "Para eliminar una tarjeta teclea la posicion de la tarjeta a eliminar." << endl;
                getline(cin, eliminar);
                if (stoi(eliminar) >= 0 && stoi(eliminar) < Tarjetas.size())
                {
                    Tarjetas.erase(Tarjetas.begin() + stoi(eliminar));
                    cout << "La tarjeta en la posicion " << eliminar << " ha sido removida " << endl;
                };
            };
            if (Tarjetas.size() < 0)
            {
                cout << "Aun no haz ingresado ninguna tarjeta." << endl;
            };
            r = "-.1";
            cout << endl;
        };
        if (r == "7")
        {
            if (Tarjetas.size() > 0)
            {
                cout << "---Tus tarjetas registradas son las siguientes---" << endl;
                for (int i = 0; i < Tarjetas.size(); i++)
                {
                    cout << i << " |" << Tarjetas[i].to_string() << endl;
                };
            };
            r = "-.1";
            cout << endl;
        };
        if (r == "8")
        {
            if (Tarjetas.size() <= 0)
            {
                cout << "Aun no puedes completar el envio, registra una tarjeta." << endl;
                r = "-.1";
            };
            if (Envios.size() <= 0)
            {
                cout << "Aun no puedes completar el envio, registra una direccion valida." << endl;
                r = "-.1";
            };
            cout << endl;
            if (Envios.size() > 0 && Tarjetas.size() > 0)
            {
                cout << "Muy bien, selecciona a que tarjeta quieres recibir el cargo. " << endl;
                for (int i = 0; i < Tarjetas.size(); i++)
                {
                    cout << i << " |" << Tarjetas[i].to_string() << endl;
                };
                getline(cin, pago);
                cout << "Ahora selecciona la direccion de envio." << endl;

                for (int i = 0; i < Envios.size(); i++)
                {
                    cout << i << " |" << Envios[i].to_string() << endl;
                };
                getline(cin, llegada);
                // for´s que recorre los vectores para sacar precio de los combos
                for (int i = 0; i < CombosChicos.size(); i++)
                {
                    contador = contador + 130;
                };
                for (int i = 0; i < CombosPareja.size(); i++)
                {
                    contador = contador + 250;
                };
                for (int i = 0; i < CombosOlvidadores.size(); i++)
                {
                    contador = contador + 249;
                };
                cout << "Pagaste con:" << endl;
                cout << Tarjetas[stoi(pago)].to_string() << endl;
                cout << Envios[stoi(llegada)].to_string() << endl;
                cout << "Total a pagar: " << contador << endl;
                cout << "Tu pedido se ha realizado exitosamente, que lo disfrutes" << endl;
                break;
            };
        };
        if (r == "0")
        {
            cout << "Regresa pronto, Daristides' Cousine te espera." << endl;
            break;
        };
    };
};

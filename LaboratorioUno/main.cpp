/* HECTOR VILLALOBOS & PATRICIO JIMENEZ */

#include "Contador.h"   // Incluye la declaración de la clase Contador
#include <iostream> 

using namespace std;

int main()
{
    // Crea un objeto contador con un valor inicial de 100, le añade 10 unidades y luego le resta 20 unidades
    Contador contador(100);
    contador.Incrementar(10);
    cout << contador.getValor() << endl; 
    contador.Decrementar(20);
    cout << contador.getValor() << endl;
    cout << endl;

    // Variable auxiliar
    int aux;

    // Creación de un array de 10 objetos Contador
    Contador *c = new Contador[10];

    // Llena cada objeto Contador con un valor incremental y muestra el valor inicial y final
    for (int i = 0; i < 10; i++)
    {
        c[i] = i;   // Asigna a cada objeto Contador un valor inicial que va de 0 a 9
        cout << "Valor inicial: " << c[i].getValor();
        aux = c[i].getValor() + 1; 
        for (int j = 0; j < 10; j++)
        {
            c[i].Incrementar(aux);
        }

        cout << ", Valor final: " << c[i].getValor() << endl;
    }    

    // Libera la memoria asignada dinámicamente
    delete[] c;

    return 0;
}

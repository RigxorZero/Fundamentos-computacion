#include "Contador.h"
#include <string>
#include <iostream>

// Constructor por parametros del Contador
Contador::Contador(int valor)
{
    this->valor = valor;
}

// Método de incremento según valor ingresado
int Contador::Incrementar(int valor)
{
    this->valor += valor;
    return this->valor;
}

// Método de decremento según valor ingresado
int Contador::Decrementar(int valor)
{
    this->valor -= valor;
    return this->valor;
}

// Getter del valor
int Contador::getValor()
{
    return this->valor;
}

#include "Peca.h"
#include <iostream>

Peca::Peca(int cor)
{
    this->cor = cor;
    emJogo = true;
}

int Peca::getCor()
{
    return(cor);
}

bool Peca::estaEmJogo()
{
    return(emJogo);
}

void Peca::setForaDeJogo(bool estado)
{
    emJogo = estado;
}

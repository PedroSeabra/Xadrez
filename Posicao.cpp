#include "Posicao.h"

Posicao::Posicao()
{
    cor = -1;
    ocupante = NULL;
}

bool Posicao::isOcupada()
{
    if(getOcupante() != NULL)
        return(true);
    else
        return(false);
}

int Posicao::getLinha()
{
    return(linha);
}

int Posicao::getColuna()
{
    return(coluna);
}

void Posicao::setColuna(int j)
{
    coluna = j;
}

void Posicao::setLinha(int i)
{
    linha = i;
}

Peca* Posicao::getOcupante()
{
    return(ocupante);
}

int Posicao::getCor()
{
    return(cor);
}

void Posicao::setCor(int c) {
	cor = c;
}

void Posicao::setOcupante(Peca *novoOcupante)
{
    ocupante = novoOcupante;
}

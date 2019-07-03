#include "Peao.h"
#include <cmath>

Peao::Peao(int cor): Peca(cor)
{
    pJogada = true;
}

bool Peao::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino)
{
    if(getCor() == 0) // Se o peão for branco.
    {
        if(linhaDestino - linhaOrigem == 2)
        {
            if(pJogada != true)
                return false;
            if(colunaDestino == colunaOrigem)
                return(true);
            else
                return(false);
        }
        else if(linhaDestino - linhaOrigem == 1)
            if(colunaOrigem == colunaDestino || abs(colunaDestino - colunaOrigem) == 1) // Movimento para frente ou em diagonal
                return(true);
        else
            return(false);
    }

    else
    if(getCor() == 1)
    {
        if(linhaOrigem - linhaDestino == 2)
        {
            if(pJogada != true)
                return false;
            if(colunaDestino == colunaOrigem)
                return(true);
            else
                return(false);
        }
        else if(linhaOrigem - linhaDestino == 1)
            if(colunaOrigem == colunaDestino || abs(colunaDestino - colunaOrigem) == 1) // Movimento para frente ou em diagonal
                return(true);
        else
            return(false);
    }
}

string Peao::desenha()
{
    if(getCor() == 0) // Peça branca
        return("p");
    else
        return("P");
}

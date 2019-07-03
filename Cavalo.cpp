#include "Cavalo.h"
#include <cmath>

Cavalo::Cavalo(int cor): Peca(cor)
{}

bool Cavalo::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino)
{
    if (abs(linhaDestino - linhaOrigem) == 2) {
        if(abs(colunaDestino - colunaOrigem) == 1)
            return true;
        else
            return false;
    } else if (abs(linhaDestino - linhaOrigem) == 1) {
        if(abs(colunaDestino - colunaOrigem) == 2)
            return true;
        else
            return false;
    }
    else
        return false;
}

string Cavalo::desenha()
{
    if(getCor() == 0) // Peça branca
        return("c");
    else
        return("C");
}

#include "Rainha.h"
#include <cmath>

Rainha::Rainha (int cor) : Peca(cor)
{}

bool Rainha::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino) {
    if (abs(linhaDestino - linhaOrigem) == abs(colunaDestino - colunaOrigem))
        return true;
    if ((linhaOrigem == linhaDestino && colunaOrigem != colunaDestino) || (linhaOrigem != linhaDestino) && (colunaOrigem == colunaDestino))
        return true;
    else
        return false;
    }

    std::string Rainha::desenha()
    {
        if(getCor() == 0) // Peça branca
            return("r");
        else
            return("R");
    }

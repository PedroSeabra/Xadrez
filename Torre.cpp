#include "Torre.h"

Torre::Torre(int cor): Peca(cor)
{}

bool Torre::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino)
{
    if ((linhaOrigem == linhaDestino && colunaOrigem != colunaDestino) || (linhaOrigem != linhaDestino) && (colunaOrigem == colunaDestino))
        return true;
    else
        return false;
}

std::string Torre::desenha()
{
    if(getCor() == 0) // Peça branca
        return("t");
    else
        return("T");
}

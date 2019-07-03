#include "Rei.h"
#include <math.h>

Rei::Rei(int cor) : Peca(cor)
{}

bool Rei::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino)
{
    if ((abs(linhaDestino - linhaOrigem) <= 1 && abs(colunaDestino - colunaOrigem) <= 1) )
        return true;
    else
        return false;

}

std::string Rei::desenha()
{
    if(getCor() == 0) // Peça branca
        return("k");
    else
        return("K");
}

#include "Bispo.h"
#include <cmath>

Bispo::Bispo(int cor): Peca(cor){};

bool Bispo::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino)
{
    if (abs(linhaDestino - linhaOrigem) == abs(colunaDestino - colunaOrigem))
        return true;
    else
        return false;
}

//Minúsculo para peças brancas, maiúsculo para as peças pretas
string Bispo::desenha()
{
    if(getCor() == 0) // Peça branca
        return("b");
    else
        return("B");
}

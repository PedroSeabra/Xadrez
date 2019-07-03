#ifndef RAINHA_H
#define RAINHA_H

#include "Peca.h"

using std::string;

class Rainha : public Peca {
    public:
        Rainha(int cor);
        bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
        string desenha();
};

#endif

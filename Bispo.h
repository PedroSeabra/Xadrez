#ifndef BISPO_H
#define BISPO_H

#include "Peca.h"

using std::string;

class Bispo: public Peca {
    public:
        Bispo(int cor);
        bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
        string desenha();
};

#endif

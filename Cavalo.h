#ifndef CAVALO_H
#define CAVALO_H

#include "Peca.h"

using std::string;

class Cavalo : public Peca {
    public:
        Cavalo(int cor);
        string desenha();
        bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
};

#endif

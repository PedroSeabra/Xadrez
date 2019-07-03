#ifndef TORRE_H
#define TORRE_H

#include "Peca.h"

using std::string;

class Torre : public Peca {
    public:
        Torre(int cor);
        bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
        string desenha();
};

#endif

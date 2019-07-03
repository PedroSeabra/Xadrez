#ifndef REI_H
#define REI_H

#include "Peca.h"

using std::string;

class Rei : public Peca {
    public:
        Rei(int cor);
        bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
        string desenha();
};

#endif

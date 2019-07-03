#ifndef PEAO_H
#define PEAO_H

#include "Peca.h"

using std::string;

class Peao : public Peca {

    private:
        bool pJogada;

    public:
        Peao(int cor);
        string desenha();
        bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
};

#endif

#ifndef PECA_H
#define PECA_H

#include <string>
using std::string;

class Peca {

    private:
        int cor; //0 para as brancas, 1 para as pretas
        bool emJogo;

    public:
        Peca(int cor);
        int getCor();
        bool estaEmJogo();
        void setForaDeJogo(bool estado);
        virtual string desenha() = 0;
        virtual bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino) = 0;

};

#endif

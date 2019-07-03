#ifndef POSICAO_H
#define POSICAO_H

#include "Peca.h"

class Posicao {
    private:
            int cor; //0 para as brancas, 1 para as pretas
            int linha;
            int coluna;
            Peca *ocupante; //-1-Vazio 2-Peoes 3-Torre 4-Cavalo 5-Bispo 6-Rei 7- Rainha


    public:
        Posicao();
        bool isOcupada();
        int getLinha();
        int getColuna();
        void setColuna(int j);
        void setLinha(int i);
        Peca* getOcupante();
        int getCor();
        void setCor(int c);
        void setOcupante(Peca* novoOcupante);
};

#endif

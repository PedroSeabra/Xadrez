#include "Posicao.h"

class Tabuleiro
{
    private:
        Posicao tabuleiro[8][8];

    public:
        Tabuleiro();
        bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
        void desenha();
        void setOcupante(int i, int j, Peca* ocup);
        bool posicaoOcupada(int i, int j);
        Peca* getOcupante(int i, int j);
};

#ifndef JOGO_H
#define JOGO_H

#include "Tabuleiro.h"
#include "Jogador.h"

class Jogo
{
    private:
        Tabuleiro tabuleiro;
        Jogador jogador[2];

        Rei* reis[2];
        Rainha* rainhas[2];
        Bispo* bispos[4];
        Torre* torres[4];
        Peao* peoes[16];
        Cavalo* cavalos[4];

        bool inicio;
        bool xeque;
        bool xeque_mate;
	

    public:
        Jogo();
        void getPecasDosJogadores();
        void inicia();
        void getRodada(int rodada);
        bool getMovimentoDoJogador();
};

#endif

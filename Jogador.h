#ifndef JOGADOR_H
#define JOGADOR_H

#include "Peca.h"
#include "Peao.h"
#include "Torre.h"
#include "Bispo.h"
#include "Cavalo.h"
#include "Rei.h"
#include "Rainha.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Jogador
{
    private:
        static int numeroDeJogador;
        string nome;

        Rei* rei;
        Rainha* rainha;
        Bispo* bispo[2];
        Cavalo* cavalo[2];
        Torre* torre[2];
        Peao* peao[8];

    public:
        Jogador();
        string getJogador();
        string getNome();
        Rei* getRei();
        Rainha* getRainha();
        Bispo* getBispos(int i);
        Cavalo* getCavalos(int i);
        Torre* getTorres(int i);
        Peao* getPeoes(int i);


};

#endif

#include "Jogador.h"

int Jogador::numeroDeJogador = 0;

Jogador::Jogador()
{
    nome = getNomeJogador();

    rei = new Rei(numeroDeJogador);
    rainha = new Rainha(numeroDeJogador);
    bispo[0] = new Bispo(numeroDeJogador);
    bispo[1] = new Bispo(numeroDeJogador);
    cavalo[0] = new Cavalo(numeroDeJogador);
    cavalo[1] = new Cavalo(numeroDeJogador);
    torre[0] = new Torre(numeroDeJogador);
    torre[1] = new Torre(numeroDeJogador);

    for(int i = 0; i < 8; i++)
        peao[i] = new Peao(numeroDeJogador);

    numeroDeJogador++;

}

string Jogador::getNomeJogador()
{
    string nome;

    cout << "Qual seu nome Jogador " << (numeroDeJogador + 1) << "?" << endl;
    cin >>  nome;

    if(nome == "")
        nome = "Convidado " + numeroDeJogador;

    return nome;
}

Rei* Jogador::getRei()
{
    return(rei);
}

Rainha* Jogador::getRainha()
{
    return(rainha);
}

Bispo* Jogador::getBispos(int i)
{
    return(bispo[i]);
}

Cavalo* Jogador::getCavalos(int i)
{
    return(cavalo[i]);
}

Torre* Jogador::getTorres(int i)
{
    return(torre[i]);
}

Peao* Jogador::getPeoes(int i)
{
    return(peao[i]);
}

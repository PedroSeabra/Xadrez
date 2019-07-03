#include "Jogo.h"

Jogo::Jogo()
{
    //Rotina: Atribuir pecas brancas a peças (Atualiza peças do jogo)
    //0-Brancas 1- Pretas (Peças duplas) ~ 0-7 - Peões Brancas 8 - 15 Peões Pretos
    getPecasDosJogadores();

    //Desenha Tabuleiro

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if (i == 0) {
                switch (j) {
                    case 0:
                        tabuleiro.setOcupante(i, j, torres[2]);
                        break;
                    case 1:
                        tabuleiro.setOcupante(i, j, cavalos[2]);
                        break;
                    case 2:
                        tabuleiro.setOcupante(i, j, bispos[2]);
                        break;
                    case 3:
                        tabuleiro.setOcupante(i, j, reis[1]);
                        break;
                    case 4:
                        tabuleiro.setOcupante(i, j, rainhas[1]);
                        break;
                    case 5:
                        tabuleiro.setOcupante(i, j, bispos[3]);
                        break;
                    case 6:
                        tabuleiro.setOcupante(i, j, cavalos[3]);
                        break;
                    case 7:
                        tabuleiro.setOcupante(i, j, torres[3]);
                        break;
                }
            }
            else {
                tabuleiro.setOcupante(i, j, peoes[j+8]);
            }
        }
    }

    for(int i = 7; i > 5; i--)
    {
        for(int j = 0; j < 8; j++)
        {
            if (i == 7) {
                switch (j) {
                	case 0:
                        tabuleiro.setOcupante(i, j, torres[0]);
                        break;
                    case 1:
                        tabuleiro.setOcupante(i, j, cavalos[0]);
                        break;
                    case 2:
                        tabuleiro.setOcupante(i, j, bispos[0]);
                        break;
                    case 3:
                        tabuleiro.setOcupante(i, j, rainhas[0]);
                        break;
                    case 4:
                        tabuleiro.setOcupante(i, j, reis[0]);
                        break;
                    case 5:
                        tabuleiro.setOcupante(i, j, bispos[1]);
                        break;
                    case 6:
                        tabuleiro.setOcupante(i, j, cavalos[1]);
                        break;
                    case 7:
                        tabuleiro.setOcupante(i, j, torres[1]);
                        break;
                }
            }
            else {
                tabuleiro.setOcupante(i, j, peoes[j]);
            }
        }
    }

    //Configura o estado do Jogo
    inicio = true;
    xeque = false;
    xeque_mate = false;

    for(int rodada = 0; ;rodada++)
    {
        if(rodada % 2 == 0)
            getRodada(0);
        else
            getRodada(1);
    }

}

void Jogo::getPecasDosJogadores()
{
    //Reis
    reis[0] = jogador[0].getRei();
    reis[1] = jogador[1].getRei();

    //Rainhas
    rainhas[0] = jogador[0].getRainha();
    rainhas[1] = jogador[1].getRainha();

    //Cavalos
    cavalos[0] = jogador[0].getCavalos(0);
    cavalos[1] = jogador[0].getCavalos(1);
    cavalos[2] = jogador[1].getCavalos(0);
    cavalos[3] = jogador[1].getCavalos(1);

    //Bispos
    bispos[0] = jogador[0].getBispos(0);
    bispos[1] = jogador[0].getBispos(1);
    bispos[2] = jogador[1].getBispos(0);
    bispos[3] = jogador[1].getBispos(1);

    //Torres
    torres[0] = jogador[0].getTorres(0);
    torres[1] = jogador[0].getTorres(1);
    torres[2] = jogador[1].getTorres(0);
    torres[3] = jogador[1].getTorres(1);

    //For para atribuir os peões
    for(int i = 0; i < 8; i++)
        peoes[i] = jogador[0].getPeoes(i);

    for(int i = 0; i < 8; i++)
        peoes[i + 8] = jogador[1].getPeoes(i);

}

void Jogo::inicia() {
    int i = 0, j = 0;
    bool x;

    for(i = 0; i < 10; i++) {
    	tabuleiro.desenha();
		this->getMovimentoDoJogador();
		printf("\ni = %d\n", i);
	}
}

bool Jogo::getMovimentoDoJogador()
{
    char colunaO, colunaD;
    int linhaOrigem, linhaDestino, colunaOrigem, colunaDestino;

    cout << "Entre a posicao de origem: ";
    cin >> colunaO >> linhaOrigem;
    cout << "Entre a posicao de destino: ";
    cin >> colunaD >> linhaDestino;
    cout << endl;

    switch(colunaO)
    {
        case 'a':
            colunaOrigem = 0;
        break;

        case 'b':
            colunaOrigem = 1;
        break;

        case 'c':
            colunaOrigem = 2;
        break;

        case 'd':
            colunaOrigem = 3;
        break;

        case 'e':
            colunaOrigem = 4;
        break;

        case 'f':
            colunaOrigem = 5;
        break;

        case 'g':
            colunaOrigem = 6;
        break;

        case 'h':
            colunaOrigem = 7;
        break;
    }

    switch(colunaD)
    {
        case 'a':
            colunaDestino = 0;
        break;

        case 'b':
            colunaDestino = 1;
        break;

        case 'c':
            colunaDestino = 2;
        break;

        case 'd':
            colunaDestino = 3;
        break;

        case 'e':
            colunaDestino = 4;
        break;

        case 'f':
            colunaDestino = 5;
        break;

        case 'g':
            colunaDestino = 6;
        break;

        case 'h':
            colunaDestino = 7;
        break;
    }

    if (tabuleiro.checaMovimento(linhaOrigem, colunaOrigem, linhaDestino, colunaDestino)) {
    	if (tabuleiro.posicaoOcupada(linhaDestino, colunaDestino)) {
    		Peca* capturada = tabuleiro.getOcupante(linhaDestino, colunaDestino);
    		if (capturada != NULL)
	    		capturada->setForaDeJogo(false);
		}
    	tabuleiro.setOcupante(linhaDestino, colunaDestino, tabuleiro.getOcupante(linhaOrigem, colunaOrigem));
    	tabuleiro.setOcupante(linhaOrigem, colunaOrigem, NULL);
    	return true;
	}
	else {
		return false;
	}
}

void Jogo::getRodada(int rodada)
{

        tabuleiro.desenha();

		cout << "\nSua vez " << jogador[rodada].getNome() << "!" << endl;

		getMovimentoDoJogador();
}

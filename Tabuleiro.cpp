#include "Tabuleiro.h"
#include <iostream>

using namespace std;

Tabuleiro::Tabuleiro()
{
    //0 - Branco 1 - Pretas
    //2- Peoes 3-Torre 4-Cavalo - 5 Bispo 6-Rainha 7-Rei
    //Preencher os ocupantes
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            tabuleiro[i][j].setLinha(i);
            tabuleiro[i][j].setColuna(j);
            
            if (i%2 == 0) {
            	if (j%2 == 0)
            		tabuleiro[i][j].setCor(0);
        		else
        			tabuleiro[i][j].setCor(1);
			}
			else {
            	if (j%2 == 0)
            		tabuleiro[i][j].setCor(1);
        		else
        			tabuleiro[i][j].setCor(0);				
			}   
        }
    }

}

bool Tabuleiro::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino)
{
    /*Casos onde retorna falso:
        1-Há uma peça da mesma cor na posição final
        2-Está fora do Tabuleiro
    */

    //É verificado qual o ocupante da posição inicial.
    Peca* pc = tabuleiro[linhaOrigem][colunaOrigem].getOcupante();
    if (pc != NULL) {
	    return pc->checaMovimento(linhaOrigem, colunaOrigem, linhaDestino, colunaDestino);
	}
	else {
		return false;
	}
    /*Primeiro - Ver se a peça valida o movimento! Fazer isso chamando a peça. */

}

//Desenha tabuleiro construido
void Tabuleiro::desenha()
{
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++)
        {
            if (tabuleiro[i][j].getOcupante() != NULL) {
                Peca *ocup = tabuleiro[i][j].getOcupante();
                cout << ocup->desenha() << ' ';
            }
            else {
                if(tabuleiro[i][j].getCor() == 0)
                    printf("x ");
                else if(tabuleiro[i][j].getCor() == 1)
                    printf("X ");
            }
        }
        printf("\n");
	}
}

void Tabuleiro::setOcupante(int i, int j, Peca* ocup) {
    tabuleiro[i][j].setOcupante(ocup);
}

Peca* Tabuleiro::getOcupante(int i, int j) {
	return tabuleiro[i][j].getOcupante();
}

bool Tabuleiro::posicaoOcupada(int i, int j) {
	return tabuleiro[i][j].isOcupada();
}

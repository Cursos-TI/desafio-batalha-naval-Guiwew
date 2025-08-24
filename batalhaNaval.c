#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    int tabuleiro[10][10]; //introduzindo o tabuleiro
    int aleatorio1 = 7, aleatorio2 = 5;//introduzindo nomeros aleatorios
    int naviovertical1[3]={3,3,3}, naviohorizontal1[3]={3,3,3};//introduzindo os navios
    int naviodiagonal1[3]={3,3,3}, naviodiagonal2[3]={3,3,3};

    //loop para inicializar o tabuleiro
    for (int inicializar=0; inicializar<10; inicializar++){
        for (int inicializar2=0; inicializar2<10; inicializar2++){
            tabuleiro[inicializar][inicializar2] = 0;}}  //termino do loop para inializar o tabuleiro


    //posicionando o naviovertical 1
    for (int posicaonavio = 0; posicaonavio < 3; posicaonavio++){//inicio for-while
        if (posicaonavio == 0){// inicio if 1 condição
            if (aleatorio1 >= 0 && aleatorio1 < 8 && aleatorio2 >=0 && aleatorio2 < 8
                && tabuleiro[aleatorio1][aleatorio2] == 0 && tabuleiro[aleatorio1 + 1][aleatorio2] == 0 && tabuleiro[aleatorio1 + 2][aleatorio2] == 0)
            {// inicio if 2 condição
                tabuleiro[aleatorio1][aleatorio2] = naviovertical1[posicaonavio];
                aleatorio1++;
            }else{// inicio else 2 condição
                aleatorio1 = 1, aleatorio2 = 2;
                posicaonavio--;
            }// fim else segunda condição
        }/* fim if 1 condição */else{//inicio else 1 condição
            tabuleiro[aleatorio1][aleatorio2] = naviovertical1[posicaonavio];
            aleatorio1++;
        }// fim else 1 condição
    }// fim for-while


    //posicionando o naviohorizontal 1
    for (int posicaonavio = 0; posicaonavio < 3; posicaonavio++){//inicio for-while
        if (posicaonavio == 0){// inicio if 1 condição
            if (aleatorio1 >= 0 && aleatorio1 < 8 && aleatorio2 >=0 && aleatorio2 < 8
                && tabuleiro[aleatorio1][aleatorio2] == 0 && tabuleiro[aleatorio1][aleatorio2 + 1] == 0 && tabuleiro[aleatorio1][aleatorio2 + 2] == 0)
            {// inicio if 2 condição
                tabuleiro[aleatorio1][aleatorio2] = naviohorizontal1[posicaonavio];
                aleatorio2++;
            }else{// inicio else 2 condição
                aleatorio1 = 1, aleatorio2 = 7;
                posicaonavio--;
            }// fim else segunda condição
        }/* fim if 1 condição */else{//inicio else 1 condição
            tabuleiro[aleatorio1][aleatorio2] = naviohorizontal1[posicaonavio];
            aleatorio2++;
        }// fim else 1 condição
    }// fim for-while


    //posicionando o naviodiagonal 1
    for (int posicaonavio = 0; posicaonavio < 3; posicaonavio++){//inicio for-while
        if (posicaonavio == 0){// inicio if 1 condição
            if (aleatorio1 >= 0 && aleatorio1 < 8 && aleatorio2 >=0 && aleatorio2 < 8
                && tabuleiro[aleatorio1][aleatorio2] == 0 && tabuleiro[aleatorio1 + 1][aleatorio2 + 1] == 0 && tabuleiro[aleatorio1 + 2][aleatorio2 + 2] == 0)
            {// inicio if 2 condição
                tabuleiro[aleatorio1][aleatorio2] = naviovertical1[posicaonavio];
                aleatorio1++, aleatorio2++;
            }else{// inicio else 2 condição
                aleatorio1 = 7, aleatorio2 = 7;
                posicaonavio--;
            }// fim else segunda condição
        }/* fim if 1 condição */else{//inicio else 1 condição
            tabuleiro[aleatorio1][aleatorio2] = naviovertical1[posicaonavio];
            aleatorio1++, aleatorio2++;
        }// fim else 1 condição
    }// fim for-while
    

    //posicionando o navio diagonal 2
    for (int posicaonavio = 0; posicaonavio < 3; posicaonavio++){//inicio for-while
        if (posicaonavio == 0){// inicio if 1 condição
            if (aleatorio1 >= 2 && aleatorio1 < 10 && aleatorio2 >=0 && aleatorio2 < 8
                && tabuleiro[aleatorio1][aleatorio2] == 0 && tabuleiro[aleatorio1 - 1][aleatorio2 + 1] == 0 && tabuleiro[aleatorio1 - 2][aleatorio2 + 2] == 0)
            {// inicio if 2 condição
                tabuleiro[aleatorio1][aleatorio2] = naviovertical1[posicaonavio];
                aleatorio1--, aleatorio2++;
            }else{// inicio else 2 condição
                aleatorio1 = 9, aleatorio2 = 0;
                posicaonavio--;
            }// fim else segunda condição
        }/* fim if 1 condição */else{//inicio else 1 condição
            tabuleiro[aleatorio1][aleatorio2] = naviovertical1[posicaonavio];
            aleatorio1--, aleatorio2++;
        }// fim else 1 condição
    }// fim for-while


    //loop para exibir o tabuleiro
    for (int mapax=0; mapax<10; mapax++){
        for(int mapay=0; mapay<10; mapay++){
            printf("%d  ", tabuleiro[mapax][mapay]);}
        printf("\n");}

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

#include <stdio.h>

int main() {

    int tabuleiro[10][10]; //tabuleiro
    int aleatorio1 = 7, aleatorio2 = 5;//nomeros aleatorios
    int naviovertical1[3]={3,3,3}, naviohorizontal1[3]={3,3,3};//navio
    int naviodiagonal1[3]={3,3,3}, naviodiagonal2[3]={3,3,3};//navio
    int habilidadecone[3][5]={{0,0,1,0,0},{0,1,1,1,0},{1,1,1,1,1}},//habilidades ja iniciada
    habilidadecruz[5][5]={{0,0,1,0,0},{0,0,1,0,0},{1,1,1,1,1},{0,0,1,0,0},{0,0,1,0,0}},//habilidades ja iniciada
    habilidadeoctaedro[5][5]={{0,0,1,0,0},{0,1,1,1,0},{1,1,1,1,1},{0,1,1,1,0},{0,0,1,0,0}};//habilidades ja iniciada
    int pontofocalconei, pontofocalconej, pontofocalcruzi, pontofocalcruzj, pontofocaloctaedroi, pontofocaloctaedroj;//ponto focal das habilidades

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


    pontofocalconei = 4, pontofocalconej = 2;
    //habilidade cone
    for (int i = 0; i < 3; i++){//inicio do for-while externo
        for (int j = 0; j < 5; j++){// inicio do for-while interno

            if ((i + pontofocalconei) < 10 && (i + pontofocalconei) >= 0 && (j + pontofocalconej) < 10 && (j + pontofocalconej) >= 0 ){//inicio do if-true externo
                if (habilidadecone[i][j]){//inicio do if=true interno

                    tabuleiro[i + pontofocalconei][j + pontofocalconej] = 5;
                }// fim do if-true interno
            }//fim do if-true externo
        }//fim do for-while interno
    }//fim do for-while externo  
    //obs: não utilizado limitador de habilidade caso saia do tabuleiro apenas o restante da habilidade não ira fazer efeito
    
    pontofocalcruzi = 2, pontofocalcruzj = 5;
    //habilidade cruz
    for(int i = 0; i < 5; i++){//inicio for-while externo
        for (int j = 0; j < 5; j++){//inicio for-while interno

            if ((i + pontofocalcruzi) < 10 && (i + pontofocalcruzi) >= 0 && (j + pontofocalcruzj) < 10 && (j + pontofocalcruzj)){//inicio if-true externo
                if (habilidadecruz[i][j]){//inicio if-true interno

                    tabuleiro[i + pontofocalcruzi][j + pontofocalcruzj] = 5;
                }//fim if-true interno
            }//fim if-true externo
        }//fim for-while interno
    }//fim for-while externo


    pontofocaloctaedroi = 0, pontofocalconej = 1;
    //habilidade octaedro
    for(int i = 0; i < 5; i++){//inicio for-while externo
        for (int j = 0; j < 5; j++){//inicio for-while interno

            if ((i + pontofocaloctaedroi) < 10 && (i + pontofocaloctaedroi) >= 0 && (j + pontofocaloctaedroj) < 10 && (j + pontofocaloctaedroj) >= 0){//inicio if-true externo
                if (habilidadeoctaedro[i][j]){//inicio if-true interno

                    tabuleiro[i + pontofocaloctaedroi][j + pontofocaloctaedroj] = 5;
                }//fim if-true interno
            }//fim if-true externo
        }//fim for-while interno
    }//fim for-while externo


    //loop para exibir o tabuleiro
    for (int mapax=0; mapax<10; mapax++){
        for(int mapay=0; mapay<10; mapay++){
            printf("%d  ", tabuleiro[mapax][mapay]);}
        printf("\n");}

    return 0;
}

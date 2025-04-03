#include <stdio.h>

void matriz_cone (){

    char colunas [10] = {'A', 'B', 'C', 'D', 'E'};
    int linhas [10] = {1, 2, 3, 4, 5};

    int matriz_cone [6][6] = {0};



    //crinado a forma de cone dentro do tabuleiro
    for (int i = 0; i < 5; i ++){
        matriz_cone [0][2] = 2, matriz_cone [1][1] = 2, matriz_cone [1][2] = 2, matriz_cone [1][3] = 2;
        for (int j = 0; j < 5; j++){
            matriz_cone [2][i] = 2;
        }
    }
    //imprindo as colunas de caracteres
    printf(" ");
    for (int i =0; i < 5; i++){ 
        printf(" ");
        printf("%c", colunas[i]);
                
    }
    printf("\n");

    //imprimindo o tabuleiro
    for (int i = 0; i < 5; i ++){
        printf("%d", linhas[i]);//imprimindo as linhas numeradas
        for (int j = 0; j < 5; j ++){
            printf(" %d", matriz_cone[i][j]);//imprimindo o tabuleiro 5x5 de 0s
        }
        printf("\n");
    }
    printf("\n");
}


int main(){

    

    char colunas [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhas [10] = {1, 2, 3, 4, 5, 6 ,7 , 8, 9, 10};
    int tabuleiro [10][10] = {0};
    
    //navio posicionado na vertical
    for (int i = 0; i < 3; i ++){
        tabuleiro[1][i] = 3;
    }
    

    //navio posicionado na horizontal 
    for (int i = 3; i < 6; i++){

        tabuleiro[i][9] = 3;
    }

    // navio posicionado na digonal
    for (int i = 7; i < 10; i ++){
        tabuleiro[i][i] = 3;
        for (int j = 0; j < 3; j++){//segundo navio posicionado na diagonal
            tabuleiro[i][-i] = 3;
        }
    }
  

    //imprimindo o tabuleiro 10x10 de 0s com loops aninhados

    printf("*************TABULEIRO BATALHA NAVAL*****************\n");
    printf("\n");
    printf("   ");
    

    for (int i = 0; i < 10; i ++){
        
        printf("  %c", colunas[i]);
    }

    for (int i = 0; i < 10; i ++){
        printf("\n  %d", linhas[i]);
        for (int j = 0; j < 10; j ++){
            printf("  %d", tabuleiro[j][i]);
            
        }
    }
    printf("\n");


}

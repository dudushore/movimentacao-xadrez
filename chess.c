#include <stdio.h>


#define TORRE_CASAS 5
#define BISPO_CASAS 5
#define RAINHA_CASAS 8


void torreMovRecursiva(int casas) {

    if (casas <= 0) {
        return;
    }
    printf("Direita\n");
    torreMovRecursiva(casas - 1);
}


void rainhaMovRecursiva(int casas) {

    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    rainhaMovRecursiva(casas - 1);
}


void bispoMovRecursivo(int casas) {

    if (casas <= 0) {
        return;
    }
    printf("Cima\n");
    printf("Direita\n");
    bispoMovRecursivo(casas - 1);
}


void bispoMovLoopsAninhados(int casas) {

    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}


void cavaloMovLoopsComplexos() {

    int passo;
    for (passo = 1; passo <= 3; passo++) {
        if (passo <= 2) {
            printf("Cima\n");
            continue; 
        }
        printf("Direita\n");
        break;
    }
}


int main() {
    printf("--- Movimento da Torre ---\n");
    torreMovRecursiva(TORRE_CASAS);
    

    printf("\n"); 
    
    printf("--- Movimento da Rainha ---\n");
    rainhaMovRecursiva(RAINHA_CASAS);
    
    printf("\n");
    
    printf("--- Movimento do Bispo (Recursivo) ---\n");
    bispoMovRecursivo(BISPO_CASAS);
    
    printf("\n");
    
    printf("--- Movimento do Bispo (Loops Aninhados) ---\n");
    bispoMovLoopsAninhados(BISPO_CASAS);

    printf("\n");
    
    printf("--- Movimento do Cavalo (Loop Complexo) ---\n");
    cavaloMovLoopsComplexos();
    
    return 0;
}
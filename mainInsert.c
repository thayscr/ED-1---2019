#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 100
void main() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    int eleito = 0;
    int j = 0;
    int troca = 0;
    int compara = 0;
    clock_t tempoInicial, tempoFinal; //Variaveis para guardar o tempo de execucao
    srand(time(NULL)); //Cria uma semente para numeros aleatorios
    tempoInicial = clock(); //inicia contagem do tempo
    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 10; 
    }
    // vetor nao ordenado
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    // vetor  da selecao
    for (int i = 1; i < TAMANHO; i++) {
        eleito = vetor[i];
        compara++;
        j = i - 1;
        while (j >= 0 && vetor[j] > eleito) {
            vetor[j + 1] = vetor[j];
            j--;
            troca++;
        }
        vetor[j + 1] = eleito;
    }
    
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    tempoFinal = clock(); 
    printf("Tempo: %f s\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
    printf("Comparações: %d\n", compara);
    printf("Quantidade de trocas: %d\n", troca);
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMANHO 4
void main() {
    int vetor[TAMANHO]; //vetor com tamanho definido
    int aux = 0; //varivel para ser usada na troca
    int troca = 0; // Trocas feitas
    int compara = 0; // Comparações
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
        //Ordena vetor pelo metodo da bolha
        for (int i = 1; i < TAMANHO; i++) {
            for (int j = 0; j < TAMANHO - 1; j++) {
                if (vetor[j] > vetor[j + 1]) {
                    troca = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = troca;
                    
                }
            }
        }
        //Mostra valores nao ordenado
        for (int i = 0; i < TAMANHO; i++) {
            printf("%d\t", vetor[i]);
        }
        printf("\n");
        //ordenar em ordem decrescente
         for (int i = 1; i < TAMANHO; i++) {
            for (int j = 0; j < TAMANHO - 1; j++) {
                if (vetor[j] < vetor[j + 1]) {
                    troca = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = troca;
                }
            }
        }
        //Mostra valores do vetor ordenado
        for (int i = 0; i < TAMANHO; i++) {
            printf("%d\t", vetor[i]);
        }
        printf("\n");
        
        // Quantidades de Trocas e Comparações
        for(int i = TAMANHO - 1; i >= 1; i--){
            for(int j = 0; j < i; j++){
                compara++;
                if(vetor[j] > vetor[j + 1]){
                    int aux = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor [j + 1] = aux;
                    troca++;
                }
            }
        }
  
    tempoFinal = clock(); 
    printf("Tempo: %f\n", (double) (tempoFinal - tempoInicial) / CLOCKS_PER_SEC);
    printf("Comparações: %d\n", compara);
    printf("Quantidade de trocas: %d\n", troca);
}

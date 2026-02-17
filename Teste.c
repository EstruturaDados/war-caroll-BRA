#include <stdio.h>
#include <string.h>

// Declaração de Territórios
// 1. Nome: Coreia do Norte, Cor: Lilás, Tropas: 2
// 2. Nome: Coreia do Sul, Cor: Rosa Pink, Tropas: 4
// 3. Nome: China, Cor: Vermelha, Tropas: 5
// 4. Nome:  Taiwan, Cor: Dourado, Tropas: 8
// 5. Nome: Japão, Cor: Azul, Tropas: 3

// Variáveis Globais

#define MAX_Territorio 20

// Definição de estrutura

typedef struct{
     char nome[30];
     char cor[10];
     int tropas;
} Territorio;

Territorio territoriodeclarado = {"nome[30]", "cor[10]", 0};

int main() {
    while (MAX_Territorio < 5){
    printf("Nome: %s Cor: %s Tropas: %d", territoriodeclarado.nome, territoriodeclarado.cor, territoriodeclarado.tropas);
    }
return = 0;
}



#include <stdio.h>
#include <string.h>

// Declaração de Territórios
// 1. Nome: Coreia do Norte, Cor: Lilás, Tropas: 2
// 2. Nome: Coreia do Sul, Cor: Rosa Pink, Tropas: 4
// 3. Nome: China, Cor: Vermelha, Tropas: 5
// 4. Nome:  Taiwan, Cor: Dourado, Tropas: 8
// 5. Nome: Japão, Cor: Azul, Tropas: 3

// Definição de estrutura
int main(){
typedef struct{
     char nome[30];
     char cor[10];
     int tropas;
} Territorio;

// Definição de constantes

#define MAX_Territorio 40
       
// Declaração de territórios 

while (MAX_Territorio < 4){
     printf("Digite, nessa squência, território, cor e tropa:");
     fgets("Nome: %s Cor: %s Tropas: %d", Territorio.nome, Territorio.cor, Territorio.tropas);
     return = 0;
}

}
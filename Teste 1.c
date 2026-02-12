#include <stdio.h>
#include <string.h>

// Definição de estrutura

typedef struct{
     char nome[30];
     char cor[10];
     int tropas;
} Territorio;


// Definição de constantes

#define MAX_Territorio 40

// Declaração de territórios 

int main () {
Territorio territorio1 = {"Coreia do Norte","Lilás",2};
Territorio territorio2 = {"Coreia do Sul","Rosa Pink", 4};
Territorio territorio3 = {"China","Vermelha",5};
Territorio territorio4 = {"Taiwan","Dourado",8};
Territorio territorio5 = {"Japão","Azul",3};
return 0;
}

printf("Deseja visualizar territórios?");
printf("Digite opção SIM ou NÃO");

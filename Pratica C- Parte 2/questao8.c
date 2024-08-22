#include <stdio.h>

struct Pessoa {
    char nome[50];
    int dia;
    int mes;
    int ano;
};

int main() {
    struct Pessoa pessoas[6];
    int i;
    struct Pessoa maisNova, maisVelha;

    for (i = 0; i < 6; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %s", pessoas[i].nome); 
        printf("Digite a data de nascimento (DD MM AAAA) da pessoa %d: ", i + 1);
        scanf("%d %d %d", &pessoas[i].dia, &pessoas[i].mes, &pessoas[i].ano);
    }

    maisNova = pessoas[0];
    maisVelha = pessoas[0];

    for (i = 1; i < 6; i++) {
        if (pessoas[i].ano > maisNova.ano ||
            (pessoas[i].ano == maisNova.ano && pessoas[i].mes > maisNova.mes) ||
            (pessoas[i].ano == maisNova.ano && pessoas[i].mes == maisNova.mes && pessoas[i].dia > maisNova.dia)) {
            maisNova = pessoas[i];
        }
        if (pessoas[i].ano < maisVelha.ano ||
            (pessoas[i].ano == maisVelha.ano && pessoas[i].mes < maisVelha.mes) ||
            (pessoas[i].ano == maisVelha.ano && pessoas[i].mes == maisVelha.mes && pessoas[i].dia < maisVelha.dia)) {
            maisVelha = pessoas[i];
        }
    }

    printf("A pessoa mais nova é: %s\n", maisNova.nome);
    printf("A pessoa mais velha é: %s\n", maisVelha.nome);

    return 0;
}

#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[50];
    float notas[3];
};

int main() {
    struct Aluno alunos[5];
    int i, j;
    float maior_media = 0.0;
    int indice_media = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o número de matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %s", alunos[i].nome);  

        for (j = 0; j < 3; j++) {
            printf("Digite a nota %d do aluno %s: ", j + 1, alunos[i].nome);
            scanf("%f", &alunos[i].notas[j]);
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++) {
        float media = 0.0;
        for (j = 0; j < 3; j++) {
            media += alunos[i].notas[j];
        }
        media /= 3;

        if (media > maior_media) {
            maior_media = media;
            indice_media = i;
        }
    }

    printf("Maior media eh do:\n");
    printf("Nome: %s\n", alunos[indice_media].nome);
    printf("Matrícula: %d\n", alunos[indice_media].matricula);
    for (j = 0; j < 3; j++) {
        printf("Nota %d: %.2f\n", j + 1, alunos[indice_media].notas[j]);
    }
    printf("Média: %.2f\n", maior_media);

    return 0;
}
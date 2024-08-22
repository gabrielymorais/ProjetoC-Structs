#include <stdio.h>
#include <string.h>
struct Hora {
    int hora;
    int minuto;
    int segundo;
};

int main() {
    struct Hora horas[5];
    int i;
    struct Hora maiorHora;

    for (i = 0; i < 5; i++) {
        printf("Digite a hora %d: ", i + 1);
        scanf("%d %d %d", &horas[i].hora, &horas[i].minuto, &horas[i].segundo);
    }
    maiorHora = horas[0];

    for (i = 1; i < 5; i++) {
        if (horas[i].hora > maiorHora.hora ||
            (horas[i].hora == maiorHora.hora && horas[i].minuto > maiorHora.minuto) ||
            (horas[i].hora == maiorHora.hora && horas[i].minuto == maiorHora.minuto && horas[i].segundo > maiorHora.segundo)) {
            maiorHora = horas[i];
        }
    }

    printf("A maior hora é: %02d:%02d:%02d\n", maiorHora.hora, maiorHora.minuto, maiorHora.segundo);

    return 0;
}

#include <stdio.h>

int main() {

    float temperatura, umidade;
    unsigned int estoque, estoque_minimo = 100;

    printf("Digite temperatura: \n");
    scanf("%f", &temperatura);
    printf("Digite a umidade: \n");
    scanf("%f", &umidade);
    printf("Digite o estoque: \n");
    scanf("%u", &estoque);

    if( temperatura > 30.0) {
        printf("Temperatura está alta: \n");
    } else {
        printf("Temperatura está dentro dos parâmetros: \n");
    }
    if (umidade > 50.0) {
        printf("Umidade está alta: \n");
    } else {
        printf("Umidade está dentro dos parâmetros: \n");
    }
    if (estoque < estoque_minimo) {
        printf("Estoque está baixo do mínimo: \n");
    } else {
        printf("Estoque está normal: \n");
    }

}

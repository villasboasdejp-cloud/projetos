#include <stdio.h>

int main() {
    float temperatura = 8.0;

    if (temperatura > 30.0){
        printf("Está calor\n");

    }
        else if (temperatura < 15.0){
            printf("Está muito frio\n");
        }
        else {
            printf("Está agradável\n");
        }
}
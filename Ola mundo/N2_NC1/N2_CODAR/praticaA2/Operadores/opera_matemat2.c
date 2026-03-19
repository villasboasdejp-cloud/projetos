#include <stdio.h>

int main (){
    /*
    atirbuição simple(=)
    atirbuição com soma (+=)
    atirbuição com subtração (-=)
    atirbuição com multiplicação (*=)
    atirbuição com divisão (/=)
*/
    int numero1=10, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n" , resultado);

    //resultado = resultado + 20;
    resultado += 20;
    printf("Resultado: %d\n" , resultado);

    //resultado = resultado - numero1;
    resultado -= numero1;
    printf("Resultado: %d\n" , resultado);
    
    //resulatdo = resultado * 5;
    resultado *= 5;
    printf("Resultado: %d\n" , resultado);

    //resultado = resultado / 2;
    resultado /= 2;
    printf("Resultado: %d\n" , resultado);
}
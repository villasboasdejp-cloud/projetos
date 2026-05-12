#include <stdio.h>

int main(){
    int idade = 13;
    
    if (idade > 12 && idade < 18) {
        printf("Você é um adolescente");
     } else if (idade >= 18 && idade < 60) {
            printf("Voccê é um adulto ");
        } else if(idade >= 60) {
            printf("Você é um idoso");
    }

   
}
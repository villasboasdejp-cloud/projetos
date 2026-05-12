#include <stdio.h>
#include <string.h>

	int main(){
        float brigadeiro, brigadeirobranco, prestígio, maracujá, doisAmores, soma;
        brigadeiro = 10.00;
        brigadeirobranco = 10.00;
        prestígio = 10.00;
        maracujá = 12.00;
        doisAmores = 10.00;
        int escolha, quantidade;
        char finalizar;
        char pedirmais[4];
        char resposta[500];


	//*apresentação para o client

    printf("***************************************\n");
	printf("*      Ola,Seja Bem vindo             *\n");
	printf("*              ao                     *\n");
	printf("*          VILLAS BALA                *\n");
    printf("***************************************\n");

    //* sabores do bolo e preços
    printf("+--------------------------------------+\n");
    printf("|        Sabores do Bolo               |\n");
    printf("+--------------------------------------+\n");
    printf("*     1 Brigadeiro         - R$ 10,00  *\n");
    printf("*     2 Brigadeiro Branco  - R$ 10,00  *\n");
    printf("*     3 Prestígio          - R$ 10,00  *\n");
    printf("*     4 Maracujá           - R$ 12,00  *\n");
    printf("*     5 Dois Amores        - R$ 10,00  *\n");
    printf("+--------------------------------------+\n");

    //* perguntar qual sabor o cliente deseja e quantos bolos ele quer comprar
    
    printf("Qual sabor do bolo você deseja? Digite o número correspondente:\n");
    scanf("%d", &escolha);
    printf("Quantos bolos você deseja?\n");
    scanf("%d", &quantidade);

    //* calcular o valor total dos bolos escolhidos e exibir o resultado para o cliente
    switch(escolha){
        case 1: soma = quantidade * brigadeiro; break;
        case 2: soma = quantidade * brigadeirobranco; break;
        case 3: soma = quantidade * prestígio; break;
        case 4: soma = quantidade * maracujá; break;
        case 5: soma = quantidade * doisAmores; break;
        default: printf("Escolha inválida\n"); soma = 0; break;
    }
    printf("O valor total dos seus bolos é R$ %.2f\n", soma);

    //* mensagem de agradecimento para o cliente
    
    printf("Deseja finalizar a compra ? \n");
    scanf(" %s", resposta);

    if (resposta[0] == 's' || resposta[0] == 'S') {
        printf("Compra finalizada com sucesso!\n");
    } else if (resposta[0] == 'n' || resposta[0] == 'N') {
        printf("Deseja pedir mais?\n");
        scanf(" %s", pedirmais);
        if (pedirmais[0] == 's' || pedirmais[0] == 'S') {
            printf("Qual sabor do bolo você deseja? Digite o número correspondente:\n");
            scanf("%d", &escolha);
            printf("Quantos bolos você deseja?\n");
            scanf("%d", &quantidade);
            switch(escolha) {
                case 1: soma += quantidade * brigadeiro; break;
                case 2: soma += quantidade * brigadeirobranco; break;
                case 3: soma += quantidade * prestígio; break;
                case 4: soma += quantidade * maracujá; break;
                case 5: soma += quantidade * doisAmores; break;
                default: printf("Escolha inválida\n"); break;
            }
        }
    }
    printf("O valor total dos seus bolos é R$ %.2f\n", soma);
    printf("Obrigado por comprar conosco! volte semmpre!\n");
    return 0;
}
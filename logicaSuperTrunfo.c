//SuperTrunfo v6

#include <stdio.h>

//variaveis carta 1 e 2
char estado1[20], estado2[20];                    // Letra do estado
char codigo1[4], codigo2[4];              // Código da carta
char cidade1[50], cidade2[50];            // Nome da cidade
unsigned int populacao1, populacao2;      // População
float area1, area2;                       // Área
float pib1, pib2;                         // PIB
int turisticos1, turisticos2;             // Pontos turísticos
float densidade1, densidade2;             // Densisade populacional
float pibpc1, pibpc2;                     // Pib per capta
float super1, super2;                     // Superpoder soma de população, área, pib, pib per capta e densidade populacional invertida
int soma1 = 0, soma2 = 0;                 // Soma das rodadas ganhadas

void carta1() {
    //le os dados da primeira carta
    printf("Insira os dados da Primeira carta:\n");
    
    printf("Nome do Estado: ");
    scanf(" %s", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade SEM Espaços: ");
    scanf(" %s", cidade1);

    printf("População: ");
    scanf(" %u", &populacao1);

    printf("Área da cidade (em km²): ");
    scanf(" %f", &area1);

    printf("PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Número de pontos turísticos:");
    scanf(" %d", &turisticos1);
}

void carta2() {
    //le os dados da segunda carta
    printf("\nInsira os dados da Segunda carta:\n");

    printf("Nome do Estado: ");
    scanf(" %s", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade SEM Espaços: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf(" %u", &populacao2);

    printf("Área da cidade (em km²): ");
    scanf(" %f", &area2);

    printf("PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &turisticos2);
}

void calculos() {
    //calculo de densidade populacional = população dividido pela area
    densidade1 = populacao1/area1;
    densidade2 = populacao2/area2;
    //calculo pib per capta = pib dividido pela populacao
    pibpc1 =  pib1/populacao1;
    pibpc2 =  pib2/populacao2;
    //superpoder soma de população, área, pib, pib per capta
    super1 = populacao1 + area1 + pib1 + pibpc1;
    super2 = populacao2 + area2 + pib2 + pibpc2;
}

void resultados () {
  // Exibe os dados da carta 1
    printf(
        "\nCarta 1:\n"
        "Estado: %s\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %u\n"
        "Área: %.1f km²\n"
        "PIB: %.1f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f habitantes/km²\n"
        "PIB per capita: R$ %.2f\n"
        "Superpoder: %.2f\n",
        estado1, codigo1, cidade1, populacao1, area1, pib1, turisticos1, densidade1, pibpc1, super1);

    // Exibe os dados da carta 2
    printf(
        "\nCarta 2:\n"
        "Estado: %s\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %u\n"
        "Área: %.1f km²\n"
        "PIB: %.1f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n"
        "Densidade Populacional: %.2f habitantes/km²\n"
        "PIB per capita: R$ %.2f\n"
        "Superpoder: %.2f\n",
        estado2, codigo2, cidade2, populacao2, area2, pib2, turisticos2, densidade2, pibpc2, super2);
}

void menu() {
    int opcao;
    int repetir = 1;
    
    while (repetir) {
        //tem muito oque dizer sobre aqui nao, numero do case pro atributo que deseja comparar
        printf("\nMENU DE COMPARAÇÃO DE ATRIBUTOS\n");
        printf("1 - Comparar População\n");
        printf("2 - Comparar Área\n");
        printf("3 - Comparar PIB\n");
        printf("4 - Comparar PIB per capita\n");
        printf("5 - Comparar Pontos Turísticos\n");
        printf("6 - Comparar Densidade Populacional\n");
        printf("7 - Comparar Superpoder\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);

        switch (opcao) {
            //switch mostra os cases disponiveis, o case selecionado é oque vai executa o código até o break
            case 1:
                printf("Carta 1 - Estado: %s | População: %u\n", estado1, populacao1);
                printf("Carta 2 - Estado: %s | População: %u\n", estado2, populacao2);
                if (populacao1 > populacao2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
                    soma1++;
                } else if (populacao1 < populacao2) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
                    soma2++;
                } else {
                    printf("Empate\n");
                }
                break;

            case 2:
                printf("Carta 1 - Estado: %s | Área: %.1f\n", estado1, area1);
                printf("Carta 2 - Estado: %s | Área: %.1f\n", estado2, area2);
                if (area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
                    soma1++;
                } else if (area1 < area2){
                    printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
                    soma2++;
                } else {
                    printf("Empate\n");
                }
                break;

            case 3:
                printf("Carta 1 - Estado: %s | Pib: %.1f\n", estado1, pib1);
                printf("Carta 2 - Estado: %s | Pib: %.1f\n", estado2, pib2);
                if (pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
                    soma1++;
                } else if (pib1 < pib2){
                    printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
                    soma2++;
                } else {
                    printf("Empate\n");
                }
                break;

            case 4:
                printf("Carta 1 - Estado: %s | Pib per capta: %.2f\n", estado1, pibpc1);
                printf("Carta 2 - Estado: %s | Pib per capta: %.2f\n", estado2, pibpc2);
                if (pibpc1 > pibpc2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
                    soma1++;
                } else if (pibpc1 < pibpc2){
                    printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
                    soma2++;
                } else {
                    printf("Empate\n");
                }
                break;

            case 5:
                printf("Carta 1 - Estado: %s | Pontos Turísticos: %d\n", estado1, turisticos1);
                printf("Carta 2 - Estado: %s | Pontos Turísticos: %d\n", estado2, turisticos2);
                if (turisticos1 > turisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
                    soma1++;
                } else if (turisticos1 < turisticos2){
                    printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
                    soma2++;
                } else {
                    printf("Empate\n");
                }
                break;
                
            case 6:
                printf("Carta 1 - Estado: %s | Densidade Populacional: %.2f\n", estado1, densidade1);
                printf("Carta 2 - Estado: %s | Densidade Populacional: %.2f\n", estado2, densidade2);
                if (densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
                    soma1++;
                } else if (densidade1 >  densidade2){
                    printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
                    soma2++;
                } else {
                    printf("Empate\n");
                }
                break;

            case 7:
                printf("Carta 1 - Estado: %s | Superpoder: %.2f\n", estado1, super1);
                printf("Carta 2 - Estado: %s | Superpoder: %.2f\n", estado2, super2);
                if (super1 > super2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
                    soma1++;
                } else if (super1 < super2){
                    printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
                    soma2++;
                } else {
                    printf("Empate\n");
                }
                break;
                
            case 0:
                printf("Saindo do menu...\n");
                repetir = 0;
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
}

void comparacao () {
    //sinceramente eu tava em duvida se eu deixava isso aqui ou nao por que nao faz muita diferença no final ja que vai testar 1 por 1 do menu
    //soma1 é as vezes rodadas da carta 1, soma2 é as rodadas ganhas da carta 2
    if (populacao1 > populacao2) {
        printf("\nPopulação: Carta 1 venceu (1)\n");
        soma1++;
    } else if (populacao1 < populacao2){
        printf("População: Carta 2 venceu (0)\n");
        soma2++;
    } else {
        printf("População: Empate\n");
    }

    if (area1 > area2) {
        printf("Área: Carta 1 venceu (1)\n");
        soma1++;
    } else if (area1 < area2){
        printf("Área: Carta 2 venceu (0)\n");
        soma2++;
    } else {
        printf("Área: Empate\n");
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
        soma1++;
    } else if (pib1 < pib2){
        printf("PIB: Carta 2 venceu (0)\n");
        soma2++;
    } else {
        printf("PIB: Empate\n");
    }

    if (pibpc1 > pibpc2) {
        printf("PIB per capita: Carta 1 venceu (1)\n");
        soma1++;
    } else if (pibpc1 < pibpc2){
        printf("PIB per capita: Carta 2 venceu (0)\n");
        soma2++;
    } else {
        printf("PIB per capita: Empate\n");
    }

    if (turisticos1 > turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
        soma1++;
    } else if (turisticos1 < turisticos2){
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
        soma2++;
    } else {
        printf("Pontos Turísticos: Empate\n");
    }

    if (densidade1 > densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
        soma1++;
    } else if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
        soma2++;
    } else {
        printf("Densidade Populacional: Empate\n");
    }

    if (super1 > super2){
        printf("Superpoder: Carta 1 venceu (1)\n");
        soma1++;
    } else if (super1 < super2){
        printf("Superpoder: Carta 2 venceu (0)\n");
        soma2++;
    } else {
        printf("Superpoder: Empate\n");
    }

    if (soma1 > soma2){ 
        printf("\nCarta 1 venceu o SuperTrunfo!\n");
    } else if (soma1 < soma2){
        printf("\nCarta 2 venceu o SuperTrunfo!\n");
    } else {
        printf("\nHouve um empate!\n");
    }
}

int main() {
    //coleta de dados para comparacao
    carta1();
    carta2();
    //calculos de pib, densidade e super
    calculos();
    resultados();
    //menu interativo com switch e break ( esse deu dor de cabeça )
    menu();
    //comparacao dados carta1 vs carta2
    comparacao();

    return 0;
}
//consideracoes finais: ficou um codigo gigantesco pra fazer quase nada se eu tivesse tempo eu refaria ele



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    #include <stdio.h>
    int main() {
    
       char estado1[50];
       char codigo1[50];
       char nome1[50];
       int Populacao1;
       float area1;
       float pib1;
       int pontos1;
       char estado2[50];
       char codigo2[50];
       char nome2[50];
       int Populacao2;
       float area2;
       float pib2;
       int pontos2;

        printf ("Digite os dados da Carta 1: \n");

        printf ("Digite o Estado 1: \n");
        scanf("%s", estado1);

        printf("Digite o Código da carta 1: \n");
        scanf("%s", codigo1);

        printf("Digite o Nome da Cidade 1: \n");
        scanf("%s", nome1);

        printf("Digite a População da Cidade 1: \n");
        scanf("%d", &Populacao1);

        printf("Digite a Area da Cidade 1 (em km²): \n");
        scanf("%f", &area1);

        printf("Digite o PIB da Cidade 1: \n");
        scanf("%f", &pib1);

        printf("Digite o número de Pontos turisticos da cidade 1: \n");
        scanf("%d", &pontos1);
        
        printf ("\nDigite os dados da Carta 2: \n");

        printf ("Digite o Estado 2: \n");
        scanf("%s", estado2);

        printf("Digite o Código da carta 2: \n");
        scanf("%s", codigo2);

        printf("Digite o Nome da Cidade 2: \n");
        scanf("%s", nome2);

        printf("Digite a População da Cidade 2: \n");
        scanf("%d", &Populacao2);

        printf("Digite a Area da Cidade 2 (em km²): \n");
        scanf("%f", &area2);

        printf("Digite o PIB da Cidade 2: \n");
        scanf("%f", &pib2);

        printf("Digite o número de Pontos turisticos da cidade 2: \n");
        scanf("%d", &pontos2);




        printf("\nCarta 1: \nEstado: %s\nCódigo da carta: %s\n", estado1, codigo1);
        printf("Nome da Cidade: %s\nPopulação: %d\n", nome1, Populacao1);
        printf("Área: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", area1, pib1, pontos1);
       
         printf("\nCarta 2: \nEstado: %s\nCódigo da carta: %s\n", estado2, codigo2);
        printf("Nome da Cidade: %s\nPopulação: %d\n", nome2, Populacao2);
        printf("Área: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", area2, pib2, pontos2);

    
    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    //**[Atividade nível Basico]**



    // --- Informações da cidade1:

    char NomeDaCidade1[50];

    int NumeroDaPopulação_daCidade1,NumeroDePontosTuristicos_daCidade1;
    //* Numero da população e o numero de pontos turisticos da cidade1 (carta1)

    float Area_DaCidade1,PIB_daCidade1;
    //* A Aréa em km2 e PIB da cidade1 (carta1)



    // --- Informações da cidade2:

    char NomeDaCidade2[50];

    int NumeroDaPopulação_daCidade2,NumeroDePontosTuristicos_daCidade2;
    //* Numero da população e o numero de pontos turisticos da cidade2 (carta2)

    float Area_DaCidade2,PIB_daCidade2;
    //* A Aréa em km2 e PIB da cidade2 (carta2)



    // ** Entrada de dados das Cartas **

    // Dados da cidade 1:
    printf("**Criação da Carta1**\n");
    printf("Digite o nome da cidade:\n"); //Obtenha o nome da cidade
    scanf("%s",&NomeDaCidade1);

    printf("Digite o Numero da população da cidade %s: \n",NomeDaCidade1);
    scanf("%d",&NumeroDaPopulação_daCidade1); //Obtenha o numero da população da cidade

    printf("Digite o Numero de pontos turisticos da cidade %s: \n",NomeDaCidade1);
    scanf("%d",&NumeroDePontosTuristicos_daCidade1); //Obtenha o numero de pontos turisticos da cidade

    printf("Digite a Area em km2 da cidade %s: \n",NomeDaCidade1);
    scanf("%f",&Area_DaCidade1); //Obtenha a Area em km2 da cidade

    printf("Digite o PIB da cidade %s: \n",NomeDaCidade1);
    scanf("%f",&PIB_daCidade1); //Obtenha o PIB da cidade



    // Dados da cidade 2:
    printf("**Criação da Carta2**\n");
    printf("Digite o nome da cidade:\n"); //Obtenha o nome da cidade
    scanf("%s",&NomeDaCidade2);

    printf("Digite o Numero da população da cidade %s: \n",NomeDaCidade2);
    scanf("%d",&NumeroDaPopulação_daCidade2); //Obtenha o numero da população da cidade

    printf("Digite o Numero de pontos turisticos da cidade %s: \n",NomeDaCidade2);
    scanf("%d",&NumeroDePontosTuristicos_daCidade2); //Obtenha o numero de pontos turisticos da cidade

    printf("Digite a Area em km2 da cidade %s: \n",NomeDaCidade2);
    scanf("%f",&Area_DaCidade2); //Obtenha a Area em km2 da cidade

    printf("Digite o PIB da cidade %s: \n",NomeDaCidade2);
    scanf("%f",&PIB_daCidade2); //Obtenha o PIB da cidade



    // ** Exibição das cartas registradas **
    printf("\n\n===== CARTA 1 =====\n");
    printf("| Nome: %s \n",NomeDaCidade1);
    printf("| População: %d \n",NumeroDaPopulação_daCidade1);
    printf("| Pontos Turisticos: %d \n",NumeroDePontosTuristicos_daCidade1);
    printf("| Area: %f \n",Area_DaCidade1);
    printf("| PIB: %f \n",PIB_daCidade1);
    printf("=====---------=====\n");

    printf("\n===== CARTA 2 =====\n");
    printf("| Nome: %s \n",NomeDaCidade2);
    printf("| População: %d \n",NumeroDaPopulação_daCidade2);
    printf("| Pontos Turisticos: %d \n",NumeroDePontosTuristicos_daCidade2);
    printf("| Area: %f \n",Area_DaCidade2);
    printf("| PIB: %f \n",PIB_daCidade2);
    printf("=====---------=====\n");

    return 0;
}

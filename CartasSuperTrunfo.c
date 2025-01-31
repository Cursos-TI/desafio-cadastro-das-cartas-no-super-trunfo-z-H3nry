#include <stdio.h>
// Desafio Super Trunfo - Países


//essa função calcula o PIB por capital, utilizando as informações dadas (PIB,Numero de população).
double PIB_dasCapitais(double População, double PIB){
    return PIB / População;
}

//essa função calcula a DencidadePopulacional pela divisão do NumeroDaPopulação pela Area.
float DencidadePopulacional(double NumeroDaPopulação, float Area){
    return NumeroDaPopulação / Area;
}



int main() {
    //**[Atividade nível Basico]**

    //Obs: O Codigo funcionou no VScode | menos no github CodesSpace



    // --- Informações da cidade1:

    char NomeDaCidade1[50];

    double NumeroDaPopulação_daCidade1,PIB_daCidade1;
    //* Numero da população de e o PIB da cidade

    int NumeroDePontosTuristicos_daCidade1;
    //* numero de pontos turisticos da cidade1 (carta1)

    float Area_DaCidade1;
    //* A Aréa em km2 da cidade1 (carta1)


    double PIB_DasCapitais_DaCidade1; //por cada capital
    float DensidadePopulacional_DaCidade1; //Densidade populacional



    // --- Informações da cidade2:

    char NomeDaCidade2[50];

    double NumeroDaPopulação_daCidade2,PIB_daCidade2;
    //* Numero da população de e o PIB da cidade

    int NumeroDePontosTuristicos_daCidade2;
    //* numero de pontos turisticos da cidade2 (carta1)

    float Area_DaCidade2;
    //* A Aréa em km2 da cidade2 (carta1)



    // ** Entrada de dados das Cartas **

    // Dados da cidade 1:
    printf("**Criação da Carta1**\n");
    printf("Digite o nome da cidade:\n"); //Obtenha o nome da cidademarch
    scanf("%s",NomeDaCidade1);

    printf("Digite o Numero da população da cidade %s (Em Mil [EX: 3000, 5000, 57000]): \n",NomeDaCidade1);
    scanf("%lf",&NumeroDaPopulação_daCidade1); //Obtenha o numero da população da cidade

    printf("Digite o Numero de pontos turisticos da cidade %s: \n",NomeDaCidade1);
    scanf("%d",&NumeroDePontosTuristicos_daCidade1); //Obtenha o numero de pontos turisticos da cidade

    printf("Digite a Area em km2 da cidade %s: \n",NomeDaCidade1);
    scanf("%f",&Area_DaCidade1); //Obtenha a Area em km2 da cidade

    printf("Digite o PIB da cidade %s (Em bilhões: 1.2 = 1.2 bilhões / 1.2e9): \n",NomeDaCidade1);
    scanf("%lf",&PIB_daCidade1); //Obtenha o PIB da cidade

    PIB_daCidade1 *= 1e9;
    PIB_DasCapitais_DaCidade1 = PIB_dasCapitais(NumeroDaPopulação_daCidade1,PIB_daCidade1);
    PIB_daCidade1 /= 1e9;

    DensidadePopulacional_DaCidade1 = DencidadePopulacional(NumeroDaPopulação_daCidade1,Area_DaCidade1);

    // ** Exibição das cartas registradas **
    printf("\n\n===== CARTA 1 =====\n");
    printf("| Nome: %s \n",NomeDaCidade1);
    printf("| População: %.0lf \n",NumeroDaPopulação_daCidade1);
    printf("| Pontos Turisticos: %d \n",NumeroDePontosTuristicos_daCidade1);
    printf("| Area: %.1f Km2 \n",Area_DaCidade1);
    printf("| PIB: R$%.1lf Bilhões \n",PIB_daCidade1);
    printf("| PIB por capital: R$%.2lf  \n",PIB_DasCapitais_DaCidade1);
    printf("| Densidade Populacional: %.1f \n",DensidadePopulacional_DaCidade1);
    printf("=====---------=====\n");

    return 0;
}

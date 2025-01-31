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

double SuperPoder(double NumeroDaPopulação,double PIB,float Area,int PontosTuristicos){
    return NumeroDaPopulação + PIB + Area + PontosTuristicos;
}


int main() {
    //**[Atividade nível mestre - tentativa]*

    



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

    double SuperPoder_DaCidade1; //a soma de todas as informações da carta





    // --- Informações da cidade2:

    char NomeDaCidade2[50];

    double NumeroDaPopulação_daCidade2,PIB_daCidade2;
    //* Numero da população de e o PIB da cidade

    int NumeroDePontosTuristicos_daCidade2;
    //* numero de pontos turisticos da cidade2 (carta2)

    float Area_DaCidade2;
    //* A Aréa em km2 da cidade2 (carta2)


    double PIB_DasCapitais_DaCidade2; //por cada capital
    float DensidadePopulacional_DaCidade2; //Densidade populacional

    double SuperPoder_DaCidade2; //a soma de todas as informações da carta






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
    SuperPoder_DaCidade1 = SuperPoder(NumeroDaPopulação_daCidade1,PIB_daCidade1,Area_DaCidade1,NumeroDePontosTuristicos_daCidade1);
    PIB_DasCapitais_DaCidade1 = PIB_dasCapitais(NumeroDaPopulação_daCidade1,PIB_daCidade1);
    PIB_daCidade1 /= 1e9;

    DensidadePopulacional_DaCidade1 = DencidadePopulacional(NumeroDaPopulação_daCidade1,Area_DaCidade1);



     // Dados da cidade 2:
    printf("**Criação da Carta2**\n");
    printf("Digite o nome da cidade:\n"); //Obtenha o nome da cidademarch
    scanf("%s",NomeDaCidade2);

    printf("Digite o Numero da população da cidade %s (Em Mil [EX: 3000, 5000, 57000]): \n",NomeDaCidade2);
    scanf("%lf",&NumeroDaPopulação_daCidade2); //Obtenha o numero da população da cidade

    printf("Digite o Numero de pontos turisticos da cidade %s: \n",NomeDaCidade2);
    scanf("%d",&NumeroDePontosTuristicos_daCidade2); //Obtenha o numero de pontos turisticos da cidade

    printf("Digite a Area em km2 da cidade %s: \n",NomeDaCidade2);
    scanf("%f",&Area_DaCidade2); //Obtenha a Area em km2 da cidade

    printf("Digite o PIB da cidade %s (Em bilhões: 1.2 = 1.2 bilhões / 1.2e9): \n",NomeDaCidade2);
    scanf("%lf",&PIB_daCidade2); //Obtenha o PIB da cidade

    PIB_daCidade2 *= 1e9;
    SuperPoder_DaCidade2 = SuperPoder(NumeroDaPopulação_daCidade2,PIB_daCidade2,Area_DaCidade2,NumeroDePontosTuristicos_daCidade2);
    PIB_DasCapitais_DaCidade2 = PIB_dasCapitais(NumeroDaPopulação_daCidade2,PIB_daCidade2);
    PIB_daCidade2 /= 1e9;

    DensidadePopulacional_DaCidade2 = DencidadePopulacional(NumeroDaPopulação_daCidade2,Area_DaCidade2);



    // ** Exibição das cartas registradas **

    printf("\n\n===== CARTA 1 =====\n");
    printf("| Nome: %s \n",NomeDaCidade1);
    printf("| População: %.0lf \n",NumeroDaPopulação_daCidade1);
    printf("| Pontos Turisticos: %d \n",NumeroDePontosTuristicos_daCidade1);
    printf("| Area: %.1f Km2 \n",Area_DaCidade1);
    printf("| PIB: R$%.1lf Bilhões \n",PIB_daCidade1);
    printf("| PIB por capital: R$%.2lf  \n",PIB_DasCapitais_DaCidade1);
    printf("| Densidade Populacional: %.1f \n",DensidadePopulacional_DaCidade1);
    printf("| Super Poder: %.1lf \n",SuperPoder_DaCidade1);
    printf("=====---------=====\n");



    printf("\n\n===== CARTA 2 =====\n");
    printf("| Nome: %s \n",NomeDaCidade2);
    printf("| População: %.0lf \n",NumeroDaPopulação_daCidade2);
    printf("| Pontos Turisticos: %d \n",NumeroDePontosTuristicos_daCidade2);
    printf("| Area: %.1f Km2 \n",Area_DaCidade2);
    printf("| PIB: R$%.1lf Bilhões \n",PIB_daCidade2);
    printf("| PIB por capital: R$%.2lf  \n",PIB_DasCapitais_DaCidade2);
    printf("| Densidade Populacional: %.1f \n",DensidadePopulacional_DaCidade2);
    printf("| Super Poder: %.1lf \n",SuperPoder_DaCidade2);
    printf("=====---------=====\n");

    //Fazer a comparação das informações das 2 cartas, pra no final decidir o vencedor.
    int PontosPraCidade1 = 0;
    int PontosPraCidade2 = 0;


    //Densidade
    if (DensidadePopulacional_DaCidade1 < DensidadePopulacional_DaCidade2){
        PontosPraCidade1++;
    }

    if (DensidadePopulacional_DaCidade2 < DensidadePopulacional_DaCidade1){
        PontosPraCidade2++;
    }


    //Numero da população
    if (NumeroDaPopulação_daCidade1 < NumeroDaPopulação_daCidade2){
        PontosPraCidade1++;
    }

    if (NumeroDaPopulação_daCidade2 < NumeroDaPopulação_daCidade1){
        PontosPraCidade2++;
    } 


    //Numero de pontos turisticos
    if (NumeroDePontosTuristicos_daCidade1 < NumeroDePontosTuristicos_daCidade2){
        PontosPraCidade1++;
    }

    if (NumeroDePontosTuristicos_daCidade2 < NumeroDePontosTuristicos_daCidade1){
        PontosPraCidade2++;
    } 


    //Area
    if (Area_DaCidade1 < Area_DaCidade2){
        PontosPraCidade1++;
    }

    if (Area_DaCidade2 < Area_DaCidade1){
        PontosPraCidade2++;
    } 


    //PIB
    if (PIB_daCidade1 < PIB_daCidade2){
        PontosPraCidade1++;
    }

    if (PIB_daCidade2 < PIB_daCidade1){
        PontosPraCidade2++;
    } 


    //PIB por capital
    if (PIB_DasCapitais_DaCidade1 < PIB_DasCapitais_DaCidade2){
        PontosPraCidade1++;
    }

    if (PIB_DasCapitais_DaCidade2 < PIB_DasCapitais_DaCidade1){
        PontosPraCidade2++;
    } 


    //Super poder
    if (SuperPoder_DaCidade1 < SuperPoder_DaCidade2){
        PontosPraCidade1++;
    }

    if (SuperPoder_DaCidade2 < SuperPoder_DaCidade1){
        PontosPraCidade2++;
    } 


    //Vencedor
    if (PontosPraCidade1 < PontosPraCidade2){
        printf("\n %s (cidade1/carta1) Venceu com: %d pontos",NomeDaCidade1,PontosPraCidade1);
    }

    if (PontosPraCidade2 < PontosPraCidade1){
        printf("\n %s (cidade2/carta2) Venceu com: %d pontos",NomeDaCidade2,PontosPraCidade2);
    } 

    return 0;
}
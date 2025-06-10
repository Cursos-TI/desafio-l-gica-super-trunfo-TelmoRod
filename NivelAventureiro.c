#include <stdio.h>
int main(){

//DESENVOLVENDO A LÓGICA DO JOGO
// SUPER TRUNFO - INICIANTE
// Desenvolvedores: Telmo F. Rodrigues e Helder F. Rodrigues
// Código testado e funcional!
//Variáveis com terminação em 1 são referentes a Carta 1 e com terminação 2 referentes a Carta 2
    
char estado1[3]; // Variável para armazenar apenas a sigla do estado
char estado2[3]; // Variável para armazenar apenas a sigla do estado
//----------------
char codigo1[3]; //codigo deve conter dois digitos para ficar mais claro e simples
char codigo2[3]; //codigo deve conter dois digitos para ficar mais claro e simples
//----------------
char cidade1[30]; //string
char cidade2[30]; //string
//----------------
int populacao1; //quantidade
int populacao2; //quantidade
//----------------h
float area1; //area cidade 1 em km quadrados
float area2; //area cidade 2 em km quadrados
//----------------
float pib1; //valor decimal
float pib2; //valor decimal
//----------------
int ponto1; //pontos turísticos cidade 1
int ponto2; //pontos turísticos cidade 2

// Variáveis do DESAFIO AVENTUREIRO **************************************************
    // CARTA 1
    float densidadePopulacional1;
    float pibPerCapita1;
    // CARTA 2
    float densidadePopulacional2;
    float pibPerCapita2;
    // Comparação de atributos
    int atributo;
// iINICIANDO O CADASTRO =======================================================================================
printf("Olá usuário(a), hoje você poderá cadastrar as informações para criação de duas cartas de Super Trunfo de CIDADES\n \n");
printf("Para iniciarmos, insira as informações da PRIMEIRA CIDADE \n \n");

//Iniciando coleta de informações da PRIMEIRA CARTA de cidade ---------------------------------------------------------------------------------------------------------------

// LETRA DO ESTADO
printf("Digite a sigla que representa o estado da primeira cidade. Exemplo: RJ SP MG \n");
scanf("%2s", &estado1); //%2 para armazenar apenas 2 caracteres
printf("\n");

// CÓDIGO DA CIDADE
printf("Vamos incluir um código para a cidade, ele deve conter apenas dois digitos.\n");
printf("Digite o código da primeira cidade:");
scanf("%2s", &codigo1);
printf("\n");

//NOME DA CIDADE
printf("Digite o nome da primeira cidade:");
scanf("%s", &cidade1);
printf("\n");

//POPULAÇÃO
printf("Digite a quantidade de habitantes da primeira cidade:");
scanf("%d", &populacao1);
printf("\n");

//ÁREA
printf("Digite o tamanho da área da sua primeira cidade (km²):");
scanf("%f", &area1);
printf("\n");

//PIB
printf("Digite o PIB da sua primeira cidade:");
scanf("%f", &pib1);
printf("\n");

//NUMERO DE PONTOS TURISTICOS
printf("Digite a quantidade de pontos turísticos da sua primeira cidade:");
scanf("%d", &ponto1);
printf("\n");

// IMPRESSÃO DAS INFORMAÇÕES********************
printf("Segue abaixo, as informações cadastradas da primeira carta: \n");
printf("Carta 1 \n");
printf("Estado: %.1s\n", estado1);
printf("Código: %s\n", codigo1); //concatenação
printf("Nome da cidade: %s\n", cidade1);
printf("População: %d\n",populacao1);
printf("Área: %.2f km² \n", area1);
printf("PIB: %.2f\n", pib1);
printf("Número de pontos turísticos: %d\n", ponto1);
printf("\n \n");
    
// Calculando as variáveis de densidade populacional e PIB per capita (Carta 1) DESAFIO AVENTUREIRO
  
    densidadePopulacional1 = (float)populacao1 / area1;
    printf("A densidade populacional é: %.2f hab/km²\n", densidadePopulacional1);
    pibPerCapita1 = pib1 / (float)populacao1;
    printf("O PIB per capita é: %.2f\n", pibPerCapita1);
    printf("\n");
    
//Iniciando coleta de informações da SEGUNDA CARTA de cidade ---------------------------------------------------------------------------------------------------------------

printf("Agora, vamos iniciar o cadastro da SEGUNDA CARTA de Cidade!\n \n");

// LETRA DO ESTADO
printf("Digite a sigla que representa o estado da segunda cidade. Exemplo: RJ SP MG. \n");
scanf("%2s", &estado2); //%2 para armazenar apenas 2 caracteres
printf("\n");

// CÓDIGO DA CIDADE
printf("Vamos incluir um código para a cidade, ele deve conter apenas dois digitos.\n");
printf("Digite o código da segunda cidade:");
scanf("%2s", &codigo2);
printf("\n");

//NOME DA CIDADE
printf("Digite o nome da segunda cidade:");
scanf("%s", &cidade2);
printf("\n");

//POPULAÇÃO
printf("Digite a quantidade de habitantes da segunda cidade:");
scanf("%d", &populacao2);
printf("\n");

//ÁREA
printf("Digite o tamanho da área da sua segunda cidade (km²):");
scanf("%f", &area2);
printf("\n");

//PIB
printf("Digite o PIB da sua segunda cidade:");
scanf("%f", &pib2);
printf("\n");

//NUMERO DE PONTOS TURISTICOS
printf("Digite a quantidade de pontos turísticos da sua segunda cidade:");
scanf("%d", &ponto2);
printf("\n");

// IMPRESSÃO DAS INFORMAÇÕES********************
printf("Segue abaixo, as informações cadastradas da SEGUNDA CARTA: \n");
printf("Carta 2 \n");
printf("Estado: %.1s\n", estado2);
printf("Código: %s\n", codigo2); //concatenação
printf("Nome da cidade: %s\n", cidade2);
printf("População: %d\n",populacao2);
printf("Área: %.2f km² \n", area2);
printf("PIB: %.2f\n", pib2);
printf("Número de pontos turísticos: %d\n", ponto2);

// Calculando as variáveis de densidade populacional e PIB per capita (Carta 2) DESAFIO AVENTUREIRO
  
    densidadePopulacional2 = (float)populacao2 / area2;
    printf("A densidade populacional é: %.2f hab/km²\n", densidadePopulacional2);
    pibPerCapita1 = pib2 / (float)populacao2;
    printf("O PIB per capita é: %.2f\n", pibPerCapita2);
    printf("\n");

// DESAFIO AVENTUREIRO (DESENVOLVENDO A LÓGICA DE PROGRAMAÇÃO)======================================
// Comparar um atributo escolhido: POPULAÇÃO =======================================================

  printf("Agora que cadastramos as cartas, vamos selecionar o atributo para determinar qual carta é vitoriosa?\n");
  printf("No menu abaixo segue as opçõess de atributos para comparação: \n \n");
// Menu com opções para seleção do atributo a ser comparado (NÍVEL AVENTUREIRO)
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &atributo);
    printf("\n");
// Imprimindo as informações de comparação e utilizando a função SWITCH para o atributo selecionado
    printf("Cidades para comparação:\n");
    printf("Carta 1: %s (%s) e Carta 2: %s (%s)\n", cidade1, populacao1, cidade2, populacao2);
    
switch (atributo)
    {
//--------------------------------------------------------------------------
    case 1:
      printf("Atributo selecionado pelo usuário para título de comparação: População\n")
      printf("Comparação: População de %s = %d / População de %s = %d\n", cidade1, populacao1, cidade2, populacao2);
        if (populacao1 > populacao2)
        {
          printf("A Carta 1 (Cidade de %s (%s) venceu!\n", cidade1, estado1);
        } elseif (populacao1 < populacao2)
        {
          printf("A Carta 2 (Cidade de %s (%s) venceu!\n", cidade2, estado2);
         } elseif (populacao1 == populacao2)
        {
          printf("Empate!\n");
        }
        break;
//--------------------------------------------------------------------------
      case 2:
      printf("Atributo selecionado pelo usuário para título de comparação: Área (km²)\n")
      printf("Comparação: Área (km²) de %s = %f / Área (km²) de %s = %f\n", cidade1, area1, cidade2, area2);
        if (area1 > area2)
        {
          printf("A Carta 1 (Cidade de %s (%s) venceu!\n", cidade1, estado1);
        } elseif (area1 < area2)
        {
          printf("A Carta 2 (Cidade de %s (%s) venceu!\n", cidade2, estado2);
         } elseif (area1 == area2)
        {
          printf("Empate!\n");
        }
        break;  
//--------------------------------------------------------------------------
    case 3:
      printf("Atributo selecionado pelo usuário para título de comparação: PIB\n")
      printf("Comparação: PIB de %s = %f / PIB de %s = %f\n", cidade1, pib1, cidade2, pib2);
        if (pib1 > pib2)
        {
          printf("A Carta 1 (Cidade de %s (%s) venceu!\n", cidade1, estado1);
        } elseif (pib1 < pib2)
        {
          printf("A Carta 2 (Cidade de %s (%s) venceu!\n", cidade2, estado2);
         } elseif (pib1 == pib2)
        {
          printf("Empate!\n");
        }
        break; 
//--------------------------------------------------------------------------
    case 4:
      printf("Atributo selecionado pelo usuário para título de comparação: Número de pontos turísticos\n")
      printf("Comparação: Número de pontos turísticos de %s = %d / Número de pontos turísticos de %s = %d\n", cidade1, ponto1, cidade2, ponto2);
        if (ponto1 > ponto2)
        {
          printf("A Carta 1 (Cidade de %s (%s) venceu!\n", cidade1, estado1);
        } elseif (ponto1 < ponto2)
        {
          printf("A Carta 2 (Cidade de %s (%s) venceu!\n", cidade2, estado2);
         } elseif (ponto1 == ponto2)
        {
          printf("Empate!\n");
        }
        break; 
//--------------------------------------------------------------------------
    case 5:
      printf("Atributo selecionado pelo usuário para título de comparação: Densidade demográfica\n")
      printf("Comparação: Densidade demográfica de %s = %f / Densidade demográfica de %s = %f\n", cidade1, densidadePopulacional1, cidade2, densidadePopulacional2);
        if (densidadePopulacional1 < densidadePopulacional2)
        {
          printf("A Carta 1 (Cidade de %s (%s) venceu!\n", cidade1, estado1);
        } elseif (densidadePopulacional1 > densidadePopulacional2)
        {
          printf("A Carta 2 (Cidade de %s (%s) venceu!\n", cidade2, estado2);
         } elseif (densidadePopulacional1 == densidadePopulacional2)
        {
          printf("Empate!\n");
        }
        break; 
      
    }
// Término da função SWITCH
   
return 0;
}

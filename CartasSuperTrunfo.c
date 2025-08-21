#include <stdio.h>
#include <stdlib.h>


int main() {                                 // variaveis para a carta numero 1
    char estado[85] = "" ;  //usei [] pois o nome sera uma string , o numero 85 dentro é o maximo de caracteres que ira registrar essa variavel e a maior estado tem 85 letras
    char carta [10];//Código da carta      // declarei variaveis das cartas 1 e 2 usando char [] para stringers e o numero 3 que é o maximo de letras no codigo da carta
    char cidade [60];//usei [] pois o nome sera uma string , o numero 85 dentro é o maximo de caracteres que ira registrar essa variavel e a maior estado tem 58 letras
    unsigned long int populacao;//população da cidade   // declarei variaveis int para população e pontos turisticos pois são numeros inteiros
    int turisticos, EscolhaCarta, Escolha_Atributo, menu_inicial; //Número de pontos turísticos
    float area; //Area em km²              // Declarei float pois sao variaveis flutuantes
    double PIB; //Produto Interno Bruto

    float DensidadePopulacional;         //variaveis do nivel aventureiros carta 1
    float PerCapita;

    float Super_poder;
    float inverso_densidade_populacional;
    // variaveis para a carta numero 2 sao as mesmas da carta 1, somente muda a identificação 2
    char estado2[85] ;//Nome do estado
    char carta2 [10];//Código da carta
    char cidade2 [60];//Nome da cidade
    unsigned long int populacao2; //população da cidade
    float area2; //Area em km²
    double PIB2; //Produto Interno Bruto
    int turisticos2;//Número de pontos turísticos

    float DensidadePopulacional2;         //variaveis do nivel aventureiros carta 2
    float PerCapita2;

    float Super_poder2;
    float inverso_densidade_populacional2;


    printf("A seguir vamos começar o cadastro de cartas do super trunfo!\n");  // mensagem de anuncio de inicio de cadstro de cartas do super trunfo


    printf("Digite a sigla do estado\n");// campo para preencher o nome do estado
    scanf("%s",estado);  // codigo para registrar o campo preenchido
    system("cls"); // após pesquisar usei esse codigo para limpar o terminal para nao conter muita informaçao desnecessaria
    printf("Digite o código da carta\n"); // campo para preencher o codigo da carta
    scanf("%s",carta);// codigo para registrar o campo preenchido
    system("cls");
    printf("Digite o nome da cidade\n");// campo para preencher o nome da cidade
    scanf("%s",cidade);// codigo para registrar o campo preenchido
    system("cls");
    printf("Digite a população da cidade\n");   // campo para preencher a população da cidade
    scanf("%lu",&populacao);// codigo para registrar o campo preenchido
    system("cls");
    printf("Digite a área da cidade em km²\n");// campo para preencher a area da cidade em km²
    scanf("%f",&area);// codigo para registrar o campo preenchido
    system("cls");
    printf("Digite o PIB da cidade em bilhões de reais\n");// campo para preencher o PIB da cidade
    scanf("%lf",&PIB);// codigo para registrar o campo preenchido
    system("cls");
    printf("Digite a quantidade de pontos turisticos da cidade\n"); // campo para preencher pontos turisticos da cidade
    scanf("%d",&turisticos);// codigo para registrar o campo preenchido


    DensidadePopulacional = (float) populacao / area;           // calculo densidade populacional divisão de população pela area da cidade
    PerCapita = (float) (PIB * 1000000000.0f) / populacao;                        // calculo PIB per capita divisão do pib com a população

    inverso_densidade_populacional = area / populacao;
    Super_poder = (float) populacao + area + PIB + turisticos + PerCapita + inverso_densidade_populacional;


    printf("carta 1\n");                        // comando para mostrar as informações registradas da carta numero 1
    printf("estado: %s\n", estado);
    printf("Código: %s\n", carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões de reais \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", turisticos);

    printf("densidade populacional:%.2f hab/km² \n", DensidadePopulacional);
    printf("PIB per Capita:%.2f reais \n", PerCapita);

    printf("Super poder: %.2f\n", Super_poder );



    printf("Vamos para o cadastro da segunda carta!\n"); //mensagem de aviso que ira começar o cadastro da segunda carta



    printf("Digite a sigla do estado\n");
    scanf("%s",estado2);// codigo para registrar o campo preenchido
    system("cls");       // após pesquisar usei esse codigo para limpar o terminal para nao conter muita informaçao desnecessaria
    printf("Digite o código da carta\n");
    scanf("%s",carta2);// codigo para registrar o campo preenchido
    system("cls");
    printf("Digite o nome da cidade\n");
    scanf("%s",cidade2);// codigo para registrar o campo preenchido
    system("cls");
    printf("Digite a população da cidade\n");
    scanf("%lu",&populacao2);// codigo para registrar o campo preenchido
    system("cls");
    printf("Digite a área da cidade em km²\n");
    scanf("%f",&area2);// codigo para registrar o campo preenchido
    system("cls");
    printf("Digite o PIB da cidade em bilhões de reais\n");
    scanf("%lf",&PIB2);// codigo para registrar o campo preenchido
    system("cls");
    printf("Digite a quantidade de pontos turisticos da cidade\n");
    scanf("%d",&turisticos2);// codigo para registrar o campo preenchido
    system("cls");

    DensidadePopulacional2 = (float)populacao2 / area2; // calculo densidade populacional divisão de população pela area da cidade
    PerCapita2  = (float) (PIB2 * 1000000000.0f) / populacao2;    // calculo PIB per capita divisão do pib com a população

    inverso_densidade_populacional2 = area2 / populacao2;
    Super_poder2 = (float) populacao2 + area2 + PIB2 + turisticos2 + PerCapita2 + inverso_densidade_populacional2;




    printf("carta 2\n");                         // comando para mostrar as informações registradas da carta numero 2
    printf("estado: %s\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lfbilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);

    printf("densidade populacional: hab/km²%.2f\n", DensidadePopulacional2);   //Exibição densidade populacional
    printf("PIB per Capita:%.2freais \n", PerCapita2);                      // exibição PIB per capita

    printf("Super poder: %.2f\n", Super_poder2 );


    // opções de menu inical
    printf("Escolha uma opção\n\n");
    printf(" 1 Iniciar o jogo\n");
    printf(" 2 Regras do jogo\n");
    scanf ("%d", &menu_inicial);
    system("cls");

    switch (menu_inicial) { // usei a  variavel menu iniciar para gravar a opçao digitada pelo jogador. e switch para direcionar a opção
    case 1:

        printf("Escolha a carta \n");
        printf("  carta 1 (%s)\n", cidade);
        printf("  carta 2 (%s)\n", cidade2);
        scanf("%d", &EscolhaCarta );
        break;
    case 2:
        printf("Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.");

        break;
    default:
        printf("Opção invalida");
        break;
    }


    switch (EscolhaCarta) {
    case 1:
        printf("carta 1\n");
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %lu\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2lf bilhões de reais \n", PIB);
        printf("Número de Pontos Turísticos: %d \n", turisticos);
        printf("densidade populacional:%.2f hab/km² \n", DensidadePopulacional);
        printf("PIB per Capita:%.2f reais \n", PerCapita);
        printf("Super poder: %.2f\n", Super_poder );
        break;
    case 2:

        printf("carta 2\n");
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2lfbilhões de reais \n", PIB2);
        printf("Número de Pontos Turísticos: %d\n", turisticos2);
        printf("densidade populacional: hab/km²%.2f\n", DensidadePopulacional2);
        printf("PIB per Capita:%.2freais \n", PerCapita2);
        printf("Super poder: %.2f\n", Super_poder );
        break;
    default:
        printf("Opção invalida");
        break;

    }


    /* comparação de cartas nivel aventureiro
    // comparação de cartas digitar numero para escolher o atributo de comparação


    printf("compração de cartas:\n" );
    printf("Escolha o atributo para comparação\n\n");
    printf(" 1 população \n");
    printf(" 2 área \n");
    printf(" 3 PIB \n");
    printf(" 4 Pontos turisticos: \n");
    printf(" 5 Densidade Populacional \n");
    printf(" 6 PIB per capita \n");
    printf(" 7 Super Poder \n");
    scanf("%d", &Escolha_Atributo);



    // usei o switch para direcionar qual atributo ira ser feito a comparação e if - else para comparar e dizer a carta vencedora.


    switch (Escolha_Atributo) { // switch usado para selecionar o atributo a ser escolhido, e dentro de cada case as duas variaveis a ser comparado e dar o resultado.
    case 1:

        printf("comparação de cartas \n\n");

        printf("carta 1 %s  (%s): população %lu \n", cidade, estado, populacao);            //Exibição de atributos comparados
        printf("carta 2 %s  (%s):população %lu \n", cidade2, estado2, populacao2);

        if(populacao == populacao2) {
            printf("Empate!");
        } else if ((populacao>populacao2)&&(populacao2<populacao)) {
            printf("carta 1 venceu, %s \n\n", cidade);       // resultado das comparações falso
        } else {
            printf("carta 2 venceu, %s \n\n", cidade2);
        }
        break;




    case 2:

        printf("carta 1 %s  (%s):area %.2f \n", cidade, estado, area);           //Exibição de atributos comparados
        printf("carta 2 %s  (%s):area %.2f \n", cidade2, estado2, area2);


        if(area == area2) {
            printf("Empate");
        } else if ((area > area2)&&(area2<area)) {
            printf("carta 1 venceu, %s \n\n", cidade);       // resultado das comparações falso
        } else   {
            printf("carta 2 venceu, %s \n\n", cidade2);
        }
        break;

    case 3:

        printf("carta 1 %s  (%s): PIB %.2lf bilhões de reais \n", cidade, estado, PIB);           //Exibição de atributos comparados
        printf("carta 2 %s  (%s): PIB %.2lf bilhões de reais \n", cidade2, estado2, PIB2);


        if(PIB ==PIB2) {
            printf("Empate");
        } else if ((PIB > PIB2)&&(PIB2<PIB)) {
            printf("carta 1 venceu, %s \n\n", cidade);       // resultado das comparações falso
        } else {
            printf("carta 2 venceu, %s \n\n", cidade2);
        }
        break ;

    case 4:

        printf("carta 1 %s  (%s): %d \n", cidade, estado, turisticos);           //Exibição de atributos comparados
        printf("carta 2 %s  (%s): %d \n", cidade2, estado2, turisticos2);


        if(turisticos == turisticos2) {
            printf("carta 1 venceu, %s \n\n", cidade);       // resultado das comparações verdadeiro
        } else if ((turisticos > turisticos2)&&(turisticos2<turisticos)) {
            printf("carta 1 venceu, %s \n\n", cidade);       // resultado das comparações falso
        } else {
            printf("carta 2 venceu, %s \n\n", cidade2);
        }
        break ;


    case 5:

        printf("carta 1 %s  (%s): %.2f \n", cidade, estado, DensidadePopulacional);           //Exibição de atributos comparados
        printf("carta 2 %s  (%s): %.2f \n", cidade2, estado2, DensidadePopulacional2);


        if(DensidadePopulacional == DensidadePopulacional2) {
            printf("Empate");

        } else if (( DensidadePopulacional < DensidadePopulacional2)&&(DensidadePopulacional2>DensidadePopulacional)) {
            printf("carta 1 venceu, %s \n\n",cidade);       // resultado das comparações falso
        } else {
            printf("carta 2 venceu, %s \n\n", cidade2);
        }
        break ;


    case 6:

        printf("carta 1 %s  (%s): %.2f reais\n", cidade, estado, PerCapita);           //Exibição de atributos comparados
        printf("carta 2 %s  (%s): %.2f reais\n", cidade2, estado2, PerCapita2);


        if(PerCapita == PerCapita2) {
            printf("Empate");
        } else if ((PerCapita > PerCapita2)&&(PerCapita2<PerCapita)) {
            printf("carta 1 venceu, %s \n\n", cidade);
        } else {
            printf("carta 2 venceu, %s \n\n", cidade2);
        }
        break ;

    case 7:


        printf("carta 1 %s  (%s): %.2f \n", cidade, estado, Super_poder);
        printf("carta 2 %s  (%s): %.2f \n", cidade2, estado2, Super_poder2);


        if(Super_poder == Super_poder2) {
            printf("Empate");
        } else if ((Super_poder > Super_poder2)&&(Super_poder2<Super_poder)) {
            printf("carta 1 venceu, %s \n\n", cidade);
        } else {
            printf("carta 2 venceu, %s \n\n", cidade);
        }
        break;
    default:
        printf("Opção invalida");


    }*/

    int primeiro_atributo;
    int segundo_atributo;
    int resultado1, resultado2;
    char* nome_atributo1 = "";
    char* nome_atributo2 = "";
    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;


    printf("escolha o primeiro atributo a ser comparado\n");
    printf("1 população\n");
    printf("2 área\n");
    printf("3 PIB\n");
    printf("4 numeros de pontos turisticos\n");
    printf("5 densidade populacional\n");
    printf("6 PIB per capita\n");
    scanf("%d", &primeiro_atributo);

     float soma1 = 0;
     float soma2 = 0;




    switch(primeiro_atributo){
        case 1:
            printf("voce escolheu o atributo população \n");
            nome_atributo1 ="população carta 1";
            resultado1= populacao > populacao2 ? 1 : 0;
            valor1_attr1 = populacao;
            valor2_attr1 = populacao2;
            soma1 = populacao;
            soma2 = populacao2;
        break;
        case 2:
            printf("voce escolheu o atributo area \n");
            nome_atributo1 ="Area carta 1";
            resultado1 = area > area2 ? 1 : 0;
            valor1_attr1 = area;
            valor2_attr1 = area2;
            soma1 = area;
            soma2 = area2;
        break;
        case 3:
            printf("voce escolheu o atributo PIB\n ");
            nome_atributo1 ="PIB carta 1";
            resultado1 = PIB > PIB2 ? 1 : 0;
            valor1_attr1 = PIB;
            valor2_attr1 = PIB2;
            soma1 = soma1 + PIB;
            soma2 = soma2 + PIB2;
        break;
        case 4:
            printf("voce escolheu o atributo pontos turisticos\n ");
            nome_atributo1 ="Numeros de pontos turisticos carta 1";
            resultado1 = turisticos> turisticos2 ? 1 : 0;
            valor1_attr1 = turisticos;
            valor2_attr1 = turisticos2;
            soma1= soma1 + turisticos;
            soma2= soma2 + turisticos2;
        break;
        case 5:
            printf("voce escolheu o atributo densidade populacional\n");
            nome_atributo1 ="Densidade populacional carta 1";
            resultado1 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
            valor1_attr1 = DensidadePopulacional;
            valor2_attr1 = DensidadePopulacional2;
            soma1= soma1 + DensidadePopulacional;
            soma2= soma2 + DensidadePopulacional2;
        break;
        case 6:
            printf("voce escolheu o atributo PIB per capita\n");
            nome_atributo1 ="Pib percapita carta 1";
            resultado1 = PerCapita > PerCapita2 ? 1 : 0;
            valor1_attr1 = PerCapita;
            valor2_attr1 = PerCapita2;
            soma1 = soma1 + PerCapita;
            soma2 = soma2 +PerCapita2;
        break;
        default:
             printf("opção invalida\n");
        break;


    }


    printf("escolha o segundo atributo a ser comparado\n");
    printf("1 população\n");
    printf("2 área\n");
    printf("3 PIB \n");
    printf("4 numeros de pontos turisticos\n");
    printf("5 densidade populacional\n");
    printf("6 PIB per capita\n");
    scanf("%d", &segundo_atributo);


   if (primeiro_atributo == segundo_atributo){
    printf("!!!voce ja escolheu esse atributo!!!\n");
   }else {
   switch(segundo_atributo){
        case 1:
            printf("voce escolheu o atributo população \n");
            nome_atributo2 = "População carta 2";
            resultado2= populacao > populacao2 ? 1 : 0;
            valor1_attr2 = populacao;
            valor2_attr2 = populacao2;
            soma1 = soma1 + populacao;
            soma2 = soma2 + populacao2;
       break;
        case 2:
            printf("voce escolheu o atributo area \n");
            nome_atributo2 = "Area carta 2";
            resultado2 = area > area2 ? 1 : 0;
            valor1_attr2 = area;
            valor2_attr2 = area2;
            soma1 = soma1 + area;
            soma2 = soma2 + area2;
        break;
        case 3:
            printf("voce escolheu o atributo PIB \n");
            nome_atributo2 = "PIB carta 2";
            resultado2 = PIB > PIB2 ? 1 : 0;
            valor1_attr2 = PIB;
            valor2_attr2 = PIB2;
            soma1 = soma1 + PIB;
            soma2 = soma2 + PIB2;
        break;
        case 4:
            printf("voce escolheu o atributo pontos turisticos\n ");
            nome_atributo2 = "Numero de pontos turisticos carta 2";
            resultado2 =turisticos > turisticos2 ? 1 : 0;
            valor1_attr2 =turisticos;
            valor2_attr2 = turisticos2;
            soma1 = soma1 +turisticos;
            soma2 = soma2 +turisticos2;
        break;
        case 5:
            printf("voce escolheu o atributo densidade populacional\n");
            nome_atributo2 = "Densidade populacional carta 2";
            resultado2 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
            valor1_attr2 = DensidadePopulacional;
            valor2_attr2 = DensidadePopulacional2;
            soma1 = soma1 + DensidadePopulacional;
            soma2 = soma2 + DensidadePopulacional2;
        break;
        case 6:
             printf("voce escolheu o atributo PIB per capita\n");
             nome_atributo2 = "PIB per capita carta 2";
             resultado2 = PerCapita > PerCapita2 ? 1 : 0;
             valor1_attr2 = PerCapita;
             valor2_attr2 = PerCapita2;
             soma1= soma1 + PerCapita;
             soma2= soma2 + PerCapita2;
        break;
        default:
             printf("opção invalida\n");
        break;

    }
        printf("##Resultado comparação atributos individuais###\n\n");
        if(resultado1 && resultado2){
            printf("Parabens, Voce venceu\n");
        }else if (resultado1 != resultado2){
            printf("voce empatou\n");
        }else{
            printf("voce perdeu\n");
        }


    printf("\n--- Detalhes dos Atributos Selecionados ---\n");
    printf("%s %s:  = %.2f | %s = %.2f\n",cidade,nome_atributo1, valor1_attr1,cidade2, valor2_attr1);
    printf("%s %s:  = %.2f | %s = %.2f\n",cidade,nome_atributo2, valor1_attr2,cidade2, valor2_attr2);

         printf("\n### Resultado da comparação pela soma dos atributos ###\n");
    if (soma1 > soma2) {
        printf("Parabéns, sua cidade venceu na soma dos atributos!\n");
    } else if (soma1 < soma2) {
        printf("Sua cidade perdeu na soma dos atributos.\n");
    } else {
        printf("Empate na soma dos atributos!\n");
    }

}










    return 0;
}


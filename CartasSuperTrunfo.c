#include <stdio.h>



int main() {                                 // variaveis para a carta numero 1
    char estado[85] ;  //usei [] pois o nome sera uma string , o numero 85 dentro é o maximo de caracteres que ira registrar essa variavel e a maior estado tem 85 letras
    char carta [10];//Código da carta      // declarei variaveis das cartas 1 e 2 usando char [] para stringers e o numero 3 que é o maximo de letras no codigo da carta
    char cidade [58];//usei [] pois o nome sera uma string , o numero 85 dentro é o maximo de caracteres que ira registrar essa variavel e a maior estado tem 58 letras
    unsigned long int população;//população da cidade   // declarei variaveis int para população e pontos turisticos pois são numeros inteiros
    int turisticos;//Número de pontos turísticos
    float area; //Area em km²              // Declarei float pois sao variaveis flutuantes
    double PIB; //Produto Interno Bruto
    
    float DensidadePopulacional;         //variaveis do nivel aventureiros carta 1
    float PerCapita;

    float Super_poder;
    float inverso_densidade_populacional;
                                                // variaveis para a carta numero 2 sao as mesmas da carta 1, somente muda a identificação 2
    char estado2[60] ;//Nome do estado    
    char carta2 [10];//Código da carta      
    char cidade2 [60];//Nome da cidade
    unsigned long int população2; //população da cidade
    float area2; //Area em km²
    double PIB2; //Produto Interno Bruto
    int turisticos2;//Número de pontos turísticos

    float DensidadePopulacional2;         //variaveis do nivel aventureiros carta 2
    float PerCapita2;

    float Super_poder2;
    float inverso_densidade_populacional2;

    
                        printf("A seguir vamos começar o cadastro de cartas do super trunfo!\n");  // mensagem de anuncio de inicio de cadstro de cartas do super trunfo


                        printf("Digite o estado\n");// campo para preencher o nome do estado    
                        scanf("%s",estado);  // codigo para registrar o campo preenchido
                        system("cls");   // após pesquisar usei esse codigo para limpar o terminal para nao conter muita informaçao desnecessaria  
                        printf("Digite o código da carta\n"); // campo para preencher o codigo da carta
                        scanf("%s",carta);// codigo para registrar o campo preenchido
                        system("cls");
                        printf("Digite o nome da cidade\n");// campo para preencher o nome da cidade
                        scanf("%s",cidade);// codigo para registrar o campo preenchido
                        system("cls");
                        printf("Digite a população da cidade\n");   // campo para preencher a população da cidade
                        scanf("%lu",&população);// codigo para registrar o campo preenchido
                        system("cls");
                        printf("Digite a área da cidade em km²\n");// campo para preencher a area da cidade em km²
                        scanf("%f",&area);// codigo para registrar o campo preenchido
                        system("cls");
                        printf("Digite o PIB da cidade em bilhões de reais\n");// campo para preencher o PIB da cidade
                        scanf("%lf",&PIB);// codigo para registrar o campo preenchido
                        system("cls");
                        printf("Digite a quantidade de pontos turisticos da cidade\n"); // campo para preencher pontos turisticos da cidade
                        scanf("%d",&turisticos);// codigo para registrar o campo preenchido

            
                                            DensidadePopulacional = (float) população / area;           // calculo densidade populacional divisão de população pela area da cidade
                                            PerCapita = (float) (PIB * 1000000000.0f) / população;                        // calculo PIB per capita divisão do pib com a população

                                            Super_poder = (float) população + area + PIB + turisticos + PerCapita + inverso_densidade_populacional;
                                            inverso_densidade_populacional = area / população;
    
        printf("carta 1\n");                        // comando para mostrar as informações registradas da carta numero 1
    printf("estado: %s\n", estado);
    printf("Código: %s\n", carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", população);          
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões de reais \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", turisticos);
    
    printf("densidade populacional:%.2f hab/km² \n", DensidadePopulacional);
    printf("PIB per Capita:%.2f reais \n", PerCapita);
    
    printf("Super poder: %.2f\n", Super_poder );
        
    
                        
                            printf("Vamos para o cadastro da segunda carta!\n"); //mensagem de aviso que ira começar o cadastro da segunda carta


                    
                            printf("Digite o estado\n");
                            scanf("%s",estado2);// codigo para registrar o campo preenchido
                            system("cls");       // após pesquisar usei esse codigo para limpar o terminal para nao conter muita informaçao desnecessaria
                            printf("Digite o código da carta\n");
                            scanf("%s",carta2);// codigo para registrar o campo preenchido
                            system("cls");
                            printf("Digite o nome da cidade\n");
                            scanf("%s",cidade2);// codigo para registrar o campo preenchido
                            system("cls");
                            printf("Digite a população da cidade\n");   
                            scanf("%d",&população2);// codigo para registrar o campo preenchido
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

                                            DensidadePopulacional2 = (float)população2 / area2; // calculo densidade populacional divisão de população pela area da cidade
                                            PerCapita2  = (float) (PIB2 * 1000000000.0f) / população2;    // calculo PIB per capita divisão do pib com a população

                                            Super_poder2 = (float) população2 + area2 + PIB2 + turisticos2 + PerCapita2 + inverso_densidade_populacional2;
                                            inverso_densidade_populacional = area2 / população2;
                                        
    
    
        printf("carta 2\n");                         // comando para mostrar as informações registradas da carta numero 2
    printf("estado: %s\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lfbilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);

    printf("densidade populacional: hab/km²%.2f\n", DensidadePopulacional2);   //Exibição densidade populacional
    printf("PIB per Capita:%.2freais \n", PerCapita2);                      // exibição PIB per capita

    printf("Super poder: %.2f\n", Super_poder );
     
                    int resultado_população , resultado_area,  resultado_PIB,  resultado_pontos_turisticos,  resultado_densidade_populacional,  resultado_PIB_per_capita, resultado_superpoder;

                    resultado_população = população>população2;
                    resultado_area = area>area2;
                    resultado_PIB = PIB>PIB2;
                    resultado_pontos_turisticos = turisticos>turisticos2;
                    resultado_densidade_populacional =  inverso_densidade_populacional< inverso_densidade_populacional;
                    resultado_PIB_per_capita = PerCapita>PerCapita2;
                    resultado_superpoder = Super_poder>Super_poder2;

        printf("compração de cartas:\n" );
        printf("população:(%d)\n",resultado_população);
        printf("área:(%d)\n" ,resultado_area);
        printf("PIB:(%d)\n", resultado_PIB);
        printf("Pontos turisticos:(%d)\n", resultado_pontos_turisticos);
        printf("Densidade Populacional:(%d)\n", resultado_densidade_populacional);
        printf("PIB per capita:(%d)\n", resultado_PIB_per_capita);
        printf("Super Poder:(%d)\n", resultado_superpoder);
             
           
        

                                        // Implemantação de lógica Super Trunfo nivel novato


                                      printf("comparação de cartas \n\n");

                                      printf("carta 1 %s  (%s): população %lu \n", cidade , estado , populacao);          //Exibição de atributos comparados
                                      printf("carta 2 %s  (%s):população %lu \n", cidade2 , estado2, populacao2);

                                        if(populacao > populacao2){
                                            printf("carta 1 venceu, %s \n\n", cidade);       // resultado das comparações verdadeiro
                                                                                             
                                        }else {
                                            printf("carta 2 venceu, %s \n\n", cidade2);       // resultado das comparações falso
                                        }




                                        printf("carta 1 %s  (%s):area %.2f \n", cidade , estado, area);          //Exibição de atributos comparados
                                        printf("carta 2 %s  (%s):area %.2f \n", cidade2 , estado2, area2);


                                         if(area > area2){
                                            printf("carta 1 venceu, %s \n\n", cidade);       // resultado das comparações verdadeiro

                                        }else {
                                            printf("carta 2 venceu, %s \n\n", cidade2);       // resultado das comparações falso
                                        }





                                        printf("carta 1 %s  (%s): PIB %.2lf bilhões de reais \n", cidade , estado, PIB);          //Exibição de atributos comparados
                                        printf("carta 2 %s  (%s): PIB %.2lf bilhões de reais \n", cidade2 , estado2, PIB2);


                                         if(PIB > PIB2){
                                            printf("carta 1 venceu, %s \n\n", cidade);       // resultado das comparações verdadeiro

                                        }else {
                                            printf("carta 2 venceu, %s \n\n", cidade2);       // resultado das comparações falso
                                        }



                                        printf("carta 1 %s  (%s): %d \n", cidade , estado, turisticos);          //Exibição de atributos comparados
                                        printf("carta 2 %s  (%s): %d \n", cidade2 , estado2, turisticos2);


                                         if(turisticos < turisticos2){
                                            printf("carta 1 venceu, %s \n\n", cidade);       // resultado das comparações verdadeiro

                                        }else {
                                            printf("carta 2 venceu, %s \n\n", cidade2);       // resultado das comparações falso
                                        }


                                         printf("carta 1 %s  (%s): %.2f \n", cidade , estado, DensidadePopulacional);          //Exibição de atributos comparados
                                         printf("carta 2 %s  (%s): %.2f \n", cidade2 , estado2, DensidadePopulacional2);


                                         if(DensidadePopulacional < DensidadePopulacional2){
                                            printf("carta 1 venceu, %s \n\n",cidade);       // resultado das comparações verdadeiro

                                        }else {
                                            printf("carta 2 venceu, %s \n\n",cidade2);       // resultado das comparações falso
                                        }


                                         printf("carta 1 %s  (%s): %.2f reais\n", cidade , estado, PerCapita);          //Exibição de atributos comparados
                                         printf("carta 2 %s  (%s): %.2f reais\n", cidade2 , estado2, PerCapita2);


                                         if(PerCapita > PerCapita2){
                                            printf("carta 1 venceu, %s \n\n",cidade);       // resultado das comparações verdadeiro

                                        }else {
                                            printf("carta 2 venceu, %s \n\n", cidade2);       // resultado das comparações falso
                                        }


                                         printf("carta 1 %s  (%s): %.2f \n", cidade , estado, Super_poder);          //Exibição de atributos comparados
                                         printf("carta 2 %s  (%s): %.2f \n", cidade2 , estado2, Super_poder2);


                                         if(Super_poder > Super_poder2){
                                            printf("carta 1 venceu, %s \n\n", cidade);       // resultado das comparações verdadeiro

                                        }else {
                                            printf("carta 2 venceu, %s \n\n", cidade2);       // resultado das comparações falso
                                        }
        





    return 0; 
}
   



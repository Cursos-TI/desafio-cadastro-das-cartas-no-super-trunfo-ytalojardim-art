#include <stdio.h>


int main() {
    #include <stdio.h>

int main() {                                 // variaveis para a carta numero 1
    char estado[85] ;  //usei [] pois o nome sera uma string , o numero 85 dentro é o maximo de caracteres que ira registrar essa variavel e a maior estado tem 85 letras
    char carta [3];//Código da carta      // declarei variaveis das cartas 1 e 2 usando char [] para stringers e o numero 3 que é o maximo de letras no codigo da carta
    char cidade [58];//usei [] pois o nome sera uma string , o numero 85 dentro é o maximo de caracteres que ira registrar essa variavel e a maior estado tem 58 letras
    int população;//população da cidade   // declarei variaveis int para população e pontos turisticos pois são numeros inteiros
    int turisticos;//Número de pontos turísticos
    float area; //Area em km²              // Declarei float pois sao variaveis flutuantes
    float PIB; //Produto Interno Bruto
    

                                                // variaveis para a carta numero 2 sao as mesmas da carta 1, somente muda a identificação 2
    char estado2[60] ;//Nome do estado    
    char carta2 [3];//Código da carta      
    char cidade2 [60];//Nome da cidade
    int população2; //população da cidade
    float area2; //Area em km²
    float PIB2; //Produto Interno Bruto
    int turisticos2;//Número de pontos turísticos



    printf("A seguir vamos começar o cadastro de cartas do super trunfo!\n");  // mensagem de anuncio de inicio de cadstro de cartas do super trunfo


    printf("Digite o estado\n");// campo para preencher o nome do estado    
    scanf("%s",&estado);  // codigo para registrar o campo preenchido
    
    printf("Digite o código da carta\n"); // campo para preencher o codigo da carta
    scanf("%s",&carta);// codigo para registrar o campo preenchido

    printf("Digite o nome da cidade\n");// campo para preencher o nome da cidade
    scanf("%s",&cidade);// codigo para registrar o campo preenchido

    printf("Digite a população da cidade\n");   // campo para preencher a população da cidade
    scanf("%d",&população);// codigo para registrar o campo preenchido

    printf("Digite a área da cidade em km²\n");// campo para preencher a area da cidade em km²
    scanf("%f",&area);// codigo para registrar o campo preenchido

    printf("Digite o PIB da cidade\n");// campo para preencher o PIB da cidade
    scanf("%f",&PIB);// codigo para registrar o campo preenchido

    printf("Digite a quantidade de pontos turisticos da cidade\n"); // campo para preencher pontos turisticos da cidade
    scanf("%d",&turisticos);// codigo para registrar o campo preenchido

    printf("carta 1\n");                        // comando para mostrar as informações registradas da carta numero 1
    printf("estado: %s\n", estado);
    printf("Código: %s\n", carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", população);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", turisticos);

    printf("Vamos para o cadastro da segunda carta!\n"); //mensagem de aviso que ira começar o cadastro da segunda carta


   
    printf("Digite o estado\n");
    scanf("%s",&estado2);// codigo para registrar o campo preenchido
    
    printf("Digite o código da carta\n");
    scanf("%s",&carta2);// codigo para registrar o campo preenchido

    printf("Digite o nome da cidade\n");
    scanf("%s",&cidade2);// codigo para registrar o campo preenchido

    printf("Digite a população da cidade\n");   
    scanf("%d",&população2);// codigo para registrar o campo preenchido

    printf("Digite a área da cidade em km²\n");
    scanf("%f",&area2);// codigo para registrar o campo preenchido

    printf("Digite o PIB da cidade\n");
    scanf("%f",&PIB2);// codigo para registrar o campo preenchido

    printf("Digite a quantidade de pontos turisticos da cidade\n");
    scanf("%d",&turisticos2);// codigo para registrar o campo preenchido


    
    
    
    
    printf("carta 2\n");                         // comando para mostrar as informações registradas da carta numero 2
    printf("estado: %s\n", estado);
    printf("estado: %s\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);



     


    return 0; 
}
   

    return 0;
}

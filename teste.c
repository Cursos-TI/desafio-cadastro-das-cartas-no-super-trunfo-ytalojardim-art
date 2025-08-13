#include <stdio.h>

int main() {

    float nota1, nota2;
    float  media;


        printf("##Programa de calculo de notas\n");

        printf("Digite a primeira nota do aluno\n");
        scanf("%f", &nota1 );


        printf("Digite a segunda nota do aluno\n");
        scanf("%f", &nota2);


        media=(nota1 + nota2) / 2;


        printf("A média é:%f", media);

        return 0;



}
   
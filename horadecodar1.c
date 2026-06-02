#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50]; 

    printf("Digite a idade: \n");
    scanf("%d", &idade);

    printf("Digite a altura: \n");
    scanf("%f", &altura);

    printf("Digite a matricula: \n");
    scanf("%d", &matricula);

    printf("Digite o nome: \n");
    scanf("%s", nome);

    printf("nome: %s - Matrícula: %d - Idade: %d - Altura: %.2f\n", nome, matricula, idade, altura);
    
    return 0;

}

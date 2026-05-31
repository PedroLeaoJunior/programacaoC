#include <stdio.h>

int main () {
    int idade = 39;
    float altura = 1.75;
    char opcao = 'x';
    char nome[20] = "Pedro";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura do %s é: %f\n", nome, altura);
    printf("A opção dele é: %c\n",opcao);
    return 0;

}
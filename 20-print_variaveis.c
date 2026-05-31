#include <stdio.h>

int main () {
    //declaração de variáveis;
    int idade = 39;
    float altura = 1.75;
    char opcao = 'x';
    char nome[20] = "Pedro";
    /*
    printf vai exbir as variáveis conforme formatos mencionados
    as variávesi são precedidas de seus formatos na ordem em que forem listados
    abaixo na primeira linha, primeiro termo é o %s (string), 
    indicando onde a primeira varável será inserida e seu tipo,
    neste caso "nome" 
    */
    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura do %s é: %.2f\n", nome, altura);
    printf("A opção dele é: %c\n",opcao);
   
    return 0;

}
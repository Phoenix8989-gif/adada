#include <stdio.h>

int main() {
    int numero;
    int numero_eh_divisivel_por_2 = numero % 2 == 0;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    int idade;
    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if (numero_eh_divisivel_por_2) {
        printf("O numero %i eh par!\n", numero);
    } else {
        printf("O numero %i eh impar!\n", numero);
    }
      
    

    return 0;
}
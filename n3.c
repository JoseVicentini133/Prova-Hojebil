#include <stdio.h>

int main() {
    
    char X;

    printf("Digite o seu caracter dejesado: ");
    scanf("%c", &X);
    int Decimal = (int)X;

    printf("O seu código ASCII de '%c' em decimal  %d.\n", X, Decimal);
    printf("O código ASCII de '%c' em hexadecimal  0x%X.\n", X, Decimal);

    return 0;
}
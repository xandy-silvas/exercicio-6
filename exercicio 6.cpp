#include <stdio.h>

int soma_digitos(int n) {
    if (n < 10)
        return n;
    
    return (n % 10) + soma_digitos(n / 10);
}

int main() {
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    int resultado = soma_digitos(n);
    printf("A soma dos digitos de %d eh: %d\n", n, resultado);
    
    return 0;
}

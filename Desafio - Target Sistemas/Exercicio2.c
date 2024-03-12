#include <stdio.h>

int main(){

    int numero;
    int n1 = 0;
    int n2 = 1;
    int n3;

    printf("Digite um numero inteiro e positivo qualquer: ");
    scanf("%d", &numero);

    while (numero >= n1)
    {
        if(numero != n1){
            n3 = n1;
            n1 = n2;
            n2 = n1 + n3;
        }

        else{
            printf("O numero esta na sequencia de Fibonacci");

            return 0;
        }
    }
    
    printf("O numero nao esta na sequencia de Fibonacci");

    return 0;
    
}
#include <stdio.h>
#include <string.h>

int main(){

    char string[50];
    int tamanho;
    
    printf("Digite uma frase qualquer: ");
    fgets(string, 50, stdin);
    setbuf(stdin, NULL);

    tamanho = strlen(string);

    printf("Esta eh a string invertida: ");
    
    for(int i = tamanho; i >= 0; i--){
        printf("%c", string[i]);
    }

return 0;
}
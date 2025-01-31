#include <stdio.h>
#include <string.h>

int main(void){
    char array[] = "receba na caixa dos peitos";
    int length = strlen(array);
    printf("Length: %i\n", length);
}

// o ultimo elemento de um array de caracteres é sempre o caractere nulo '\0'
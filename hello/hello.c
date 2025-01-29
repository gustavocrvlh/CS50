#include <stdio.h> //importação header file para usar a função print(e outras futuramente)

int main(void) {
    char name[50]; // array de 50 caracteres chamada name declarada
    printf("Enter your name: ");
    scanf("%49s", name); // recebe input tipo string de até 49 caracteres e armazena na variável name
    printf("Hello, %s!\n", name); // imprime a string "Hello, " concatenada com o valor de name e a string "!"
}
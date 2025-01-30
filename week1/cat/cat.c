#include <stdio.h>

// -- prototipo função meow --
// isso mostra ao compilador que
// existe uma função chamada meow
// apos o main
void meow(int n);
int get_meows(void);

int main(void) 
{
    int n = get_meows();
    meow(n);
}

int get_meows(void){
    int n = 0;
    do 
    {
        printf("How many times do you want to hear the cat meow? ");
    } 
    while (scanf("%d", &n) != 1 || n < 1);
}

void meow(int n)
{
    // int i = 0 é a inicialização
    // i < 3 é a condição
    // i++ é a expressão de incremento
    for (int i = 0; i < n; i++)
    {
        printf("Meow!\n");
    }
}
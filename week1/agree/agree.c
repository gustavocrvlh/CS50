// explicações na pasta hello
#include <stdio.h>

int main(void) {
    char response;
    printf("Do you agree? (y/n): ");
    scanf("%c", &response);

    if (response == 'y' || response == 'Y') {
        printf("You agreed.\n");
    } else if (response == 'n' || response == 'N') {
        printf("You disagreed.\n");
    } else {
        printf("Invalid response.\n");
    }

    return 0;
}
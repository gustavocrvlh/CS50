#include <stdio.h>

int main(void) {
    char *cat = "Meow!";

    int i = 3;
    while (i > 0) {
        printf("%s\n", cat);
        i--;
    }
}
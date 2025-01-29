#include <stdio.h>

int main(void) {
    int a = 5;
    int b = 10;
    if (a > b) {
        printf("a is greater than b\n");
    } else if(a < b) {
        printf("a is not greater than b\n");
    } else {
        printf("a is equal to b\n");
    }
    return 0;
}
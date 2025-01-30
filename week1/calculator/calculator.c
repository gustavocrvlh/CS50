#include <stdio.h>

int main(void){
    int n1;
    int n2;

    printf("Enter the first number: ");
    scanf("%i", &n1);
    printf("Enter the second number: ");
    scanf("%i", &n2);
    
    printf("The sum of the two numbers is: %i\n", n1 + n2);
    printf("The difference of the two numbers is: %i\n", n1 - n2);
    printf("The product of the two numbers is: %i\n", n1 * n2);
    printf("The division of the two numbers is: %f\n", (float) n1 / n2);
    printf("The remainder of the two numbers is: %i\n", n1 % n2);
    printf("THe doble of the firt number is: %i\n", n1 * 2);
    printf("The doble of the second number is: %i\n", n2 * 2);
}
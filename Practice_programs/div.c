# include <stdio.h>

int main() {
    int num1;
    int num2;
    int remainder;
    int quotient;

    printf("Enter two numbers: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    //Quotient computation
    quotient = num1 / num2;

    //Remainder computation
    remainder = num1 % num2;

    printf("Quotient = %d \n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
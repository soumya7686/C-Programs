# include <stdio.h>

int main() {
    float num1;
    float num2;

    printf("Enter two floating point numbers: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    float prod = num1 * num2;

    printf("Multiplication result is: %.3f", prod);
    return 0;
}
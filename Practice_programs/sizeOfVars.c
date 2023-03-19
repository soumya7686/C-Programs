# include <stdio.h>

//To print size of different variables
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    //sizeof returns the size of any variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    return 0;
}
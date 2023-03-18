#include<stdio.h>

void printHello(); //function prototype

int main() {
    printHello();
    printHello();
    printHello();
    return 0;
}

//function declaration
void printHello() {
    printf("Hello ! \n");
}
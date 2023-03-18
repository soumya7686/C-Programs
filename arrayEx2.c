#include<stdio.h>

//Function prototype
void printNum(int *arr, int n);

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    printNum(arr, 5);
    return 0;
}

//Function declaration
void printNum(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
}
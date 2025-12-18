#include <stdio.h>

int main(){
    char symbol = 'A';
    int number = 42;
    double decimal = 3.3456;

    printf("symbol: %c\n", symbol);
    printf("number: %d\n", number);
    printf("decimal: %.5f\n", decimal);
    return 0;
}
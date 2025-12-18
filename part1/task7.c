#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    char ch = (char)(rand() % 26 + 'A');
    int i = rand() % 1000;
    float f = (float)(rand() % 1000) / 1000;
    double d = (double)(rand()) / RAND_MAX * 100.0;
    
    printf("Значения: символ: %c, число: %d, число с плавающей точкой: %.3f, число с двойной точностью: %.6f\n", ch, i, f, d);

    return 0;
}
#include <stdio.h>

int main (){

    float *array[10];

    for (int i = 0; i <10; i++){
        printf("\nPosicoes: %p", array[i]);
    }
}
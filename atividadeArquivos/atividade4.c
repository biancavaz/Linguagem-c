#include <stdio.h>


int main() {
    float arr[10];


    for (int i = 0; i < 10; i++) {
        printf("Endereço da posição %d do array: %p\n", i, &arr[i]);
    }


    return 0;
}
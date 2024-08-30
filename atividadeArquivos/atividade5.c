#include <stdio.h>


int main() {
    int arr[5];


    int* p = arr;
    for (int i = 0; i < 5; i++) {
        scanf("%d", p);
        p++;
    }


    p = arr;
    for (int i = 0; i < 5; i++) {
        printf("Dobro do valor %d: %d\n", *p, *p * 2);
        p++;
    }


    return 0;
}

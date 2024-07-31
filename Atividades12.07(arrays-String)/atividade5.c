#include <stdio.h>

int main () {

    char str[10];
    int i, j;
    char temp;

    printf("Informe seu nome:");
    scanf("%s", str);
    
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

     printf("String invertida: %s\n", str);
}
#include <stdio.h>

int main ( ) {

    char str [30];
    int comprimento =0;

    printf("Digite alguma coisa: ");
    gets(str);

    while (str [comprimento] != 0){
        comprimento++;
    }

    printf("Essa String tem: %i", comprimento, "caracteres");

    return 0;


}
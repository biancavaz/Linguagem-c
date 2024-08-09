#include <stdio.h>

int main () {

    char str[10];

    printf("Informe uma palavra: ");
    gets (str);

    if (str[9] == str[0], str[8] == str[1], str[7] == str[2], str[6] == str[3], str[5] == str[4], 
    str[4] == str[5], str[3] == str[6], str[2] == str[7], str[1] == str[8], str[0] == str[9]){
        printf("é um polindromo ");
    } else if (str[8] == str[0], str[7] == str[1], str[6] == str[2], str[5] == str[3], 
    str[4] == str[4], str[3] == str[5], str[2] == str[6], str[1] == str[7], str[0] == str[8]){
        printf("é um polindromo ");
    } else if (str[7] == str[0], str[6] == str[1], str[5] == str[2], 
    str[4] == str[3], str[3] == str[4], str[2] == str[5], str[1] == str[6], str[0] == str[7]){
        printf("é um polindromo ");
    } else if (str[6] == str[0], str[5] == str[1], 
    str[4] == str[2], str[3] == str[3], str[2] == str[4], str[1] == str[5], str[0] == str[6]){
        printf("é um polindromo ");
    } else if (str[5] == str[0], str[4] == str[1], str[3] == str[2], 
    str[2] == str[3], str[1] == str[4], str[0] == str[5]){
        printf("é um polindromo ");
    } else if ( str[4] == str[0], str[3] == str[1], 
    str[2] == str[2], str[1] == str[3], str[0] == str[4]){
        printf("é um polindromo ");
    } else if ( str[3] == str[0], str[2] == str[1], str[1] == str[2], str[0] == str[3]){
        printf("é um polindromo ");
    } else if ( str[2] == str[0], str[1] == str[1], str[0] == str[2]){
        printf("é um polindromo ");
    } else if ( str[1] == str[0], str[0] == str[1]){
        printf("é um polindromo ");
    } else {
        printf("não é um polindromo");
    }
}
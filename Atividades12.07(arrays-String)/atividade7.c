#include <stdio.h>

int main () {

    char str[10], str2[10];
    int i=0, j=0 ;

    printf("Informe uma palavra: ");
    gets (str);

    int len = strlen (str);

    for ( i= len-1; i >=0; i--){
        str[2] = str[i];
        j++;
    }

    if(!strcmp (str2, str)) {
        printf(" É um polindromo! :3");
    } else {
        printf("Não é um polindromo");
    }

}
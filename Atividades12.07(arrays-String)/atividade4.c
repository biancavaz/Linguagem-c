# include <stdio.h>

int main (){

    char str [20];
    int comprimento =0;

    printf("digite seu nome: ");
    scanf("%s", str);

    while (str [comprimento] != 0){
        comprimento++;
    }

    for (int cont = comprimento -1; cont >= 0 ; cont--){
        printf("%c", str[cont]);
    }
}
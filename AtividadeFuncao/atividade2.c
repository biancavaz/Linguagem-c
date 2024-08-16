#include <stdio.h>
#include <stdlib.h>

int funcao (char mess) {

    if ( mess == 1  ){
      return  printf("Janeiro - 31 dias");
    } 
     if ( mess == 2  ){
       return printf("Fevereiro - 28 ou 29 dias");
    } 
     if ( mess == 3  ){
      return  printf("marco - 31 dias");
    }
     if ( mess == 4  ){
      return  printf("abril - 30 dias");
    } 
     if ( mess == 5  ){
       return printf("Maio - 31 dias");
    } 
     if ( mess == 6  ){
      return  printf("Junho - 30 dias");
    } 
     if ( mess == 7  ){
       return printf("Julho - 31 dias");
    } 
     if ( mess == 8  ){
      return  printf("Agosto - 31 dias");
    } 
     if ( mess == 9  ){
       return printf("Setembro - 30 dias");
    } 
     if ( mess == 10  ){
       return printf("Outubro - 31 dias");
    } 
     if ( mess == 11  ){
       return printf("Novembro - 30 dias");
    } 
     if ( mess == 12  ){
      return printf("dezembro - 31 dias");
    } 
}

int main () {

    int mes;

    printf("Digite o mês: ");
    scanf("%i", &mes);

    funcao(mes);

    return 0;

}
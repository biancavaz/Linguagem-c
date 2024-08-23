#include <stdio.h>

int main (){

   int array[5];
   int *p = array;

   for (int i=0; i<5; i++){
       printf("Informe os valores do array: ");
       scanf("%i", (p + i));
   }

   printf("\nDobro dos valores digitados:\n");
   for (int i = 0; i < 5; i++) {
        printf("%d ", 2 * (*(p + i)));
         printf("\n");
   }
}

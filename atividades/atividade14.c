#include <stdio.h>

int main (){

    char letra[3];

for (int cont=0; cont<3; cont++){
    printf ("informe umaa letra: ");
    scanf (" %c", &letra[cont]);
    getchar();
}

    printf( "\n%c\n%c\n%c", letra[0], letra[1], letra[2]);
}
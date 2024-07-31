#include <stdio.h>

int main () {

char str [10];
int vogais;
char substituto;

printf("Informe uma palavra: ");
gets(str);

for(int i=0; str[i] !='\0'; i++){
    char conta = str[i];
    if(conta == 'a' || conta == 'i' || conta == 'e' ||  conta == 'o' || conta ==  'u'){
        vogais++;
    }

}

for(int i=0; str[i] !='\0'; i++){
    if(str[i] == 'a' || str[i] == 'i' || str[i] == 'e' ||  str[i] == 'o' || str[i] == 'u') {
        str[i] = 'b';
    }
}

printf("\nEssa palavra tem: %i", vogais);
printf("\nA palavra substituida fica: %s", str);

}
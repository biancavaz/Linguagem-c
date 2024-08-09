#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("Digite um palavra: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i] != '\0'; i++){
    if(str[i] >= 'a' && str[i] <= 'z'){
     str[i] -= 32;
    }
    }
     printf("String em maiuscula: %s\n", str);
}
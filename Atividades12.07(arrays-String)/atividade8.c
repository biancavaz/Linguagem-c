
int main (){

    char str[40], substr[40];
    int i=0, j=0, k=0, cont=0, cont2=0;

    printf("Digite a primeira palavra: ");
    gets(str);

    printf("Digite a segunda: ");
    gets(substr);

    while(i <strlen(str)){
        k = i;
        while(j<strlen(substr)){
        if(substr[j] == str[k])
            cont++;
            j++;
            k++;
    }
        if(cont == strlen(substr))
        cont2++;
        j=0;
        cont =0;
        i++;
    }

    printf("\n %s esta contido %d vezes em %s \n\n", substr, cont2, str); 
}
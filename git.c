#include <stdio.h>
#include <stdlib.h>

int main()
{
    char start;
    printf("##########DIALOGO#########\n");
    printf("Digita 'ritual':\n");
    scanf("%c", &start);
    if (start=="ritual"){
        printf("Hello\n");
        printf("Hello oq mn?\n");
        printf("Adivinha\n");
        printf("N me diga q é...\n");
        printf("SIM! Hello World\n");
        printf("Hello\n");
        printf("Hello oq mn?\n");
        printf("Adivinha\n");
        printf("N me diga q é...\n");
        printf("SIM! Hello World\n");
    }
    else{
        printf("RODA DE NOVO, IDIOTA!!!");
    }
    
    return 0;
}
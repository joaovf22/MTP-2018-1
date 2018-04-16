João Victor Oliveira Ferreira
11721EAU006	
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    int estado, i=0, restricao=0;
    char bits[256];
    char result;
    do
    {
        i=0;
        printf("Insira o numero binario a ser testado:");
        scanf("%s", &bits);
        restricao=0;
        while (bits[i] != '\0')
        {
            if( bits[i]!= '0' && bits[i]!='1' )
                restricao++;
            i++;
        }
        if(restricao!=0)
            printf("\nO numero nao e binario, insira novamente.\n");
    }
    while(restricao!=0);

    if (bits[0]=='0')
    {
        estado = 0;
        i=1;
        while(bits[i] != '\0')
        {
            if ( estado == 0 && bits[i] == '0')
                estado = 0;
            else if( estado == 0 && bits[i] == '1')
                estado = 1;
            else if( estado == 1 && bits[i] == '0')
                estado = 2;
            else if( estado == 1 && bits[i] == '1')
                estado = 0;
            else if( estado == 2 && bits[i] == '0')
                estado = 1;
            else if( estado == 2 && bits[i] == '1')
                estado = 2;
            i++;
        }
        printf("\n\nO estado final e: %d", estado);
        printf("\nO numero testado foi: %s", bits);
        if (estado == 0)
            printf("\nO numero inserido e multipo de 3.");
        if (estado != 0)
            printf("\nO numero inserido nao e multiplo de 3.");
    }
    if(bits[0]=='1')
    {
        estado = 1;
        i=1;
        while(bits[i] != '\0')
        {
            if ( estado == 0 && bits[i] == '0')
                estado = 0;
            else if( estado == 0 && bits[i] == '1')
                estado = 1;
            else if( estado == 1 && bits[i] == '0')
                estado = 2;
            else if( estado == 1 && bits[i] == '1')
                estado = 0;
            else if( estado == 2 && bits[i] == '0')
                estado = 1;
            else if( estado == 2 && bits[i] == '1')
                estado = 2;
            i++;
        }
        printf("\n\nO estado final e: %d", estado);
        printf("\nO numero testado foi: %s", bits);
        if (estado==0)
            printf("\nO numero inserido e multipo de 3.");
        if (estado != 0)
            printf("\nO numero inserido nao e multipo de 3.");
    }
    return EXIT_SUCCESS;
}


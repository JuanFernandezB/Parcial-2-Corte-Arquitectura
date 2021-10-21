// Juan Pablo Fernandez Barragan
// Parcial 2 corte -- Arquitectura de Computadores

#include <stdio.h>
#include <string.h>

void main()
{

    printf("==============================================================");
    printf("\nPrograma que Verfica si una Palabra es un Palindromo o no");
    printf("\n============================================================\n");

    while (1)
    {
        char string1[20];
        int i, length;
        int f = 0;
        printf("\n\nIngrese un String: ");
        scanf("%s", string1);
        length = strlen(string1);
        for (i = 0; i < length; i++)
        {
            if (string1[i] != string1[length - i - 1])
            {
                f = 1;
                break;
            }
        }
        if (f)
        {
            printf("\n\n%s No es un Palindromo\n", string1);
        }
        else
        {
            printf("\n\n%s Es Palindromo\n", string1);
        }
    }
    return;
}
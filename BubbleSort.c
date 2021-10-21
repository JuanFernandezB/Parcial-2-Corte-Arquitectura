// Juan Pablo Fernandez Barragan
// Parcial 2 corte -- Arquitectura de Computadores

#include <stdio.h>

int main()
{
    int array[100], n, c, d, swap;

    printf("========================================================================");
    printf("\nC Programa que Ordena una Lista de Manera Ascendente y Descendente\n");
    printf("========================================================================\n");

    printf("Ingrese el numero de elementos\n");
    scanf("%d", &n);

    printf("Ingrese %d los numero enteros\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    for (c = 0; c < (n - 1); c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            if (array[d] > array[d + 1])
            {
                swap = array[d];
                array[d] = array[d + 1];
                array[d + 1] = swap;
            }
        }
    }

    printf("Lista ordenada de manera ascendente:\n");

    for (c = 0; c < n; c++)
        printf("%d\n", array[c]);

    printf("\nLista ordenada de manera descendente\n");

    for (c = n - 1; c >= 0; c--)
        printf("%d\n", array[c]);
    return 0;
}
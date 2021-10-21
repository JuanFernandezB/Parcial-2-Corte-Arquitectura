// Juan Pablo Fernandez Barragan
// Parcial 2 corte -- Arquitectura de Computadores

#include <stdio.h>

int main()
{

    int i, arr[50], pos, len;

    printf("=====================================================");
    printf("\nC Programa que Elimina un Elemento de un Array\n");
    printf("=====================================================\n");

    printf("Ingrese el numero de elementos que desea guardar en el array:\n");
    scanf("%d", &len);

    printf("Ingrese %d los elementos que se guardaran en el array:\n", len);

    for (i = 0; i < len; i++)

        scanf("%d", &arr[i]);

    printf("Ingrese la posicion del elemento que desea eliminar:\n");
    scanf("%d", &pos);

    i = pos - 1;

    while (i < len - 1)
    {
        arr[i] = arr[i + 1];
        i++;
    }

    len--;

    printf("Array despues de eliminar el elemento seleccionado:\n");

    for (i = 0; i < len; i++)

        printf(" %d", arr[i]);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int litros_iniciales = 0;
    int litros_agregados = 0;
    int litros_consumidos = 0;
    int litros_disponibles = 0;

    if (scanf("%d %d %d",
              &litros_iniciales,
              &litros_agregados,
              &litros_consumidos) != 3)
    {
        return 1;
    }

    litros_disponibles = litros_iniciales + litros_agregados + litros_consumidos;

    printf("Litros disponibles: %d\n", litros_disponibles);
    return 0;
}

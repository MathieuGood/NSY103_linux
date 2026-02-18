#include <stdio.h>

int main(void)
{
    // Boucle FOR classique
    printf("Boucle FOR:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("  i = %d\n", i);
    }

    // Boucle WHILE
    printf("\nBoucle WHILE:\n");
    int compteur = 0;
    while (compteur < 3)
    {
        printf("  compteur = %d\n", compteur);
        compteur++;
    }

    // Boucle DO-WHILE (s'exécute AU MOINS une fois)
    printf("\nBoucle DO-WHILE:\n");
    int x = 10;
    do
    {
        printf("  x = %d (condition déjà fausse mais s'exécute quand même)\n", x);
    } while (x < 5);

    // BREAK et CONTINUE
    printf("\nBREAK (sortir de la boucle):\n");
    for (int i = 0; i < 10; i++)
    {
        if (i == 3)
        {
            printf("  On sort à i = %d\n", i);
            break;
        }
        printf("  i = %d\n", i);
    }

    printf("\nCONTINUE (passer à l'itération suivante):\n");
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            printf("  On saute i = %d\n", i);
            continue;
        }
        printf("  i = %d\n", i);
    }

    return 0;
}
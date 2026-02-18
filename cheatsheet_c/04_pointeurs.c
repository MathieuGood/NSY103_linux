#include <stdio.h>

void echanger(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int age = 25;

    printf("=== Variable normale ===\n");
    printf("Valeur de age: %d\n", age);
    printf("Adresse de age: %p\n\n", (void *)&age);

    // Déclaration d'un pointeur
    int *ptr_age;   // ptr_age peut stocker l'adresse d'un int
    ptr_age = &age; // On lui donne l'adresse de age

    printf("=== Pointeur ===\n");
    printf("Adresse stockée dans ptr_age: %p\n", (void *)ptr_age);
    printf("Valeur pointée par ptr_age: %d\n\n", *ptr_age);

    // Modifier via le pointeur
    *ptr_age = 30;

    printf("=== Après modification via pointeur ===\n");
    printf("Valeur de age: %d\n", age);
    printf("Valeur pointée par ptr_age: %d\n", *ptr_age);

    printf("\n\n\n\n");

    int x = 5;
    int y = 10;

    printf("Avant: x = %d, y = %d\n", x, y);
    echanger(&x, &y);
    printf("Après: x = %d, y = %d\n", x, y);
    // Devrait afficher: Après: x = 10, y = 5

    return 0;
}
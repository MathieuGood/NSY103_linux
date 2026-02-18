#include <stdio.h>

int main(void)
{
    // ENTIERS
    int nombre = 42;
    printf("%d\n", nombre); // Décimal signé
    printf("%i\n", nombre); // Identique à %d
    printf("%u\n", nombre); // Décimal non signé (unsigned)
    printf("%x\n", nombre); // Hexadécimal (minuscules): 2a
    printf("%X\n", nombre); // Hexadécimal (majuscules): 2A
    printf("%o\n", nombre); // Octal: 52

    // TAILLES D'ENTIERS
    short s = 100;
    long l = 1000000L;
    printf("%hd\n", s); // short
    printf("%ld\n", l); // long

    // DÉCIMAUX
    float f = 3.14159f;
    double d = 3.14159265359;
    printf("%f\n", f);   // float/double: 3.141590
    printf("%.2f\n", f); // 2 décimales: 3.14
    printf("%e\n", f);   // Notation scientifique: 3.141590e+00

    // CARACTÈRES ET STRINGS
    char c = 'A';
    char *str = "Hello";
    printf("%c\n", c);   // Caractère: A
    printf("%s\n", str); // String: Hello

    // POINTEURS
    int x = 10;
    printf("%p\n", (void *)&x); // Adresse mémoire: 0x7ff7b...

    // POURCENTAGE LITTÉRAL
    printf("Taux: 50%%\n"); // Affiche: Taux: 50%

    return 0;
}
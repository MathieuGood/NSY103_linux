#include <stdio.h>

// Déclaration (prototype) - indique au compilateur que ces fonctions existent
int additionner(int a, int b);
void afficher_message(char *msg);
int calculer_carre(int n);

int main(void)
{
    // Appel de fonctions
    int resultat = additionner(5, 3);
    printf("5 + 3 = %d\n", resultat);

    afficher_message("Hello depuis main!");

    int carre = calculer_carre(7);
    printf("Le carré de 7 est %d\n", carre);

    return 0;
}

// Définition des fonctions (implémentation)

int additionner(int a, int b)
{
    return a + b;
}

// Ici, le * signifie que msg est un pointeur vers un caractère (ou plus précisément, vers une chaîne de caractères).
void afficher_message(char *msg)
{
    printf("Message: %s\n", msg);
    // void = pas de return
}

int calculer_carre(int n)
{
    return n * n;
}
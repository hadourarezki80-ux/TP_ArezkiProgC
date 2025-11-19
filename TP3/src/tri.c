#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int i, j, tmp;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau
    for (i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 201) - 100;  // valeurs entre -100 et 100
    }

    // Affichage du tableau non trié
    printf("Tableau non trié :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // ======== TRI À BULLES ============
    for (i = 0; i < TAILLE - 1; i++) {
        for (j = 0; j < TAILLE - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
    // ==================================

    // Affichage du tableau trié
    printf("Tableau trié par ordre croissant :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

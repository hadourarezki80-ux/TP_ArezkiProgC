#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int i;
    int min, max;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre 1 et 1000
    for (i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 1000) + 1;  // entre 1 et 1000
    }

    // Initialisation min et max à la première valeur du tableau
    min = tab[0];
    max = tab[0];

    // Recherche du min et du max
    for (i = 1; i < TAILLE; i++) {
        if (tab[i] < min)
            min = tab[i];
        if (tab[i] > max)
            max = tab[i];
    }

    // Affichage des résultats
    printf("Le numéro le plus petit est : %d\n", min);
    printf("Le numéro le plus grand est : %d\n", max);

    return 0;
}

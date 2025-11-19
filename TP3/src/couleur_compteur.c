#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100  // Nombre de couleurs

// Structure pour représenter une couleur RGBA
typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

// Structure pour stocker les couleurs distinctes et leur compteur
typedef struct {
    Couleur couleur;
    int compteur;
} CouleurDistincte;

// Fonction pour comparer deux couleurs
int couleurs_egales(Couleur c1, Couleur c2) {
    return (c1.r == c2.r) && (c1.g == c2.g) && (c1.b == c2.b) && (c1.a == c2.a);
}

int main() {
    Couleur tableau[N];
    CouleurDistincte distinctes[N]; // Au maximum N couleurs distinctes
    int nb_distinctes = 0;

    srand(time(NULL)); // Initialiser le générateur aléatoire

    // Remplir le tableau avec des couleurs aléatoires
    for (int i = 0; i < N; i++) {
        tableau[i].r = rand() % 256;
        tableau[i].g = rand() % 256;
        tableau[i].b = rand() % 256;
        tableau[i].a = rand() % 256;
    }

    // Compter les couleurs distinctes
    for (int i = 0; i < N; i++) {
        int trouve = 0;
        for (int j = 0; j < nb_distinctes; j++) {
            if (couleurs_egales(tableau[i], distinctes[j].couleur)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nb_distinctes].couleur = tableau[i];
            distinctes[nb_distinctes].compteur = 1;
            nb_distinctes++;
        }
    }

    // Afficher les couleurs distinctes et leur nombre d'occurrences
    printf("Couleurs distinctes et occurrences :\n");
    for (int i = 0; i < nb_distinctes; i++) {
        printf("0x%02x 0x%02x 0x%02x 0x%02x : %d\n",
               distinctes[i].couleur.r,
               distinctes[i].couleur.g,
               distinctes[i].couleur.b,
               distinctes[i].couleur.a,
               distinctes[i].compteur);
    }

    return 0;
}

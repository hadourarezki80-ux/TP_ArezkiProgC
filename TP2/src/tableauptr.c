#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11   // taille des tableaux

int main() {
    int tab_int[N];
    float tab_float[N];

    int *pi;
    float *pf;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // ============================
    // 1. Remplissage des tableaux
    // ============================

    pi = tab_int;       // pointeur vers début du tableau d'entiers
    pf = tab_float;     // pointeur vers début du tableau float

    for (int i = 0; i < N; i++) {
        *(pi + i) = rand() % 200;         // valeur aléatoire entière
        *(pf + i) = (rand() % 1000) / 100.0f; // valeur aléatoire float
    }

    // ============================
    // 2. Affichage avant
    // ============================

    printf("\nTableau d'entiers (avant) :\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pi + i));
    }

    printf("\n\nTableau de floats (avant) :\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(pf + i));
    }

    // ============================
    // 3. Multiplication par 3
    // ============================

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {        // indice divisible par 2
            *(pi + i) = *(pi + i) * 3;
            *(pf + i) = *(pf + i) * 3;
        }
    }

    // ============================
    // 4. Affichage après
    // ============================

    printf("\n\nTableau d'entiers (après) :\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pi + i));
    }

    printf("\n\nTableau de floats (après) :\n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", *(pf + i));
    }

    printf("\n\n");

    return 0;
}

#include <stdio.h>

int main() {
    char s1[100], s2[100];
    char copie[100];
    char concat[200];

    int i, j, longueur;

    // Saisie des chaînes
    printf("Entrez la première chaîne : ");
    scanf("%99s", s1);

    printf("Entrez la deuxième chaîne : ");
    scanf("%99s", s2);

    /* ================================
       1. Calcul de la longueur de s1
       ================================ */
    longueur = 0;
    while (s1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de la première chaîne : %d\n", longueur);

    /* ================================
       2. Copie de s1 dans copie
       ================================ */
    i = 0;
    while (s1[i] != '\0') {
        copie[i] = s1[i];
        i++;
    }
    copie[i] = '\0';  // On termine la chaîne

    printf("Copie de la chaîne : %s\n", copie);

    /* ================================
       3. Concaténation de s1 et s2
       ================================ */

    // On commence par copier s1 dans concat
    i = 0;
    while (s1[i] != '\0') {
        concat[i] = s1[i];
        i++;
    }

    // Puis on ajoute s2 après s1
    j = 0;
    while (s2[j] != '\0') {
        concat[i] = s2[j];
        i++;
        j++;
    }
    concat[i] = '\0'; // fin de chaîne

    printf("Concaténation : %s\n", concat);

    return 0;
}

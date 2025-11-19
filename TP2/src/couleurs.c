#include <stdio.h>

// Structure RGBA : chaque composant est un octet (unsigned char)
struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main() {
    // Tableau de 10 couleurs
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x49, 0x10, 0xf0, 0x80},
        {0xaa, 0xbb, 0xcc, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0x88, 0x44, 0x22, 0xff},
        {0x20, 0x90, 0xa0, 0xff},
        {0xff, 0xff, 0xff, 0xff}
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("  Rouge : %d\n",  couleurs[i].r);
        printf("  Vert  : %d\n",  couleurs[i].g);
        printf("  Bleu  : %d\n",  couleurs[i].b);
        printf("  Alpha : %d\n\n", couleurs[i].a);
    }

    return 0;
}

#include <stdio.h>

int main() {
    // Déclaration des variables
    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708;
    float f = 3.0f;           // Exemple : 3.0 en float
    double d = 1.0;           // Exemple : 1.0 en double
    long double ld = 1.0L;    // Exemple : 1.0 en long double

    // Pointeurs vers les octets
    unsigned char *p;

    // Affichage des octets de short
    printf("Octets de short :\n");
    p = (unsigned char *)&s;
    for (size_t j = 0; j < sizeof(short); j++) {
        printf(" %02x", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de int
    printf("Octets de int :\n");
    p = (unsigned char *)&i;
    for (size_t j = 0; j < sizeof(int); j++) {
        printf(" %02x", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de long int
    printf("Octets de long int :\n");
    p = (unsigned char *)&li;
    for (size_t j = 0; j < sizeof(long int); j++) {
        printf(" %02x", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de float
    printf("Octets de float :\n");
    p = (unsigned char *)&f;
    for (size_t j = 0; j < sizeof(float); j++) {
        printf(" %02x", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de double
    printf("Octets de double :\n");
    p = (unsigned char *)&d;
    for (size_t j = 0; j < sizeof(double); j++) {
        printf(" %02x", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de long double
    printf("Octets de long double :\n");
    p = (unsigned char *)&ld;
    for (size_t j = 0; j < sizeof(long double); j++) {
        printf(" %02x", p[j]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    // Déclaration et affectation des variables de différents types

    // char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    // short
    short s = -12345;
    unsigned short us = 54321;

    // int
    int i = -123456789;
    unsigned int ui = 123456789U;

    // long int
    long int li = -1234567890L;
    unsigned long int uli = 1234567890UL;

    // long long int
    long long int lli = -123456789012345LL;
    unsigned long long int ulli = 123456789012345ULL;

    // float
    float f = 3.14f;

    // double
    double d = 2.718281828;

    // long double
    long double ld = 1.6180339887L;

    // Affichage des valeurs
    printf("=== Types entiers ===\n");
    printf("char : %c (%d)\n", c, c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n", uc);

    printf("short : %hd\n", s);
    printf("unsigned short : %hu\n", us);

    printf("int : %d\n", i);
    printf("unsigned int : %u\n", ui);

    printf("long int : %ld\n", li);
    printf("unsigned long int : %lu\n", uli);

    printf("long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("\n=== Types réels ===\n");
    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}

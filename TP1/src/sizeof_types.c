#include <stdio.h>

int main() {
    printf("Taille des differents types de base en C :\n\n");

    // Types caractères
    printf("char               : %zu octet(s)\n", sizeof(char));
    printf("signed char        : %zu octet(s)\n", sizeof(signed char));
    printf("unsigned char      : %zu octet(s)\n\n", sizeof(unsigned char));

    // Types entiers courts
    printf("short              : %zu octet(s)\n", sizeof(short));
    printf("unsigned short     : %zu octet(s)\n\n", sizeof(unsigned short));

    // Types entiers standards
    printf("int                : %zu octet(s)\n", sizeof(int));
    printf("unsigned int       : %zu octet(s)\n\n", sizeof(unsigned int));

    // Types entiers longs
    printf("long int           : %zu octet(s)\n", sizeof(long int));
    printf("unsigned long int  : %zu octet(s)\n\n", sizeof(unsigned long int));

    // Types entiers très longs
    printf("long long int      : %zu octet(s)\n", sizeof(long long int));
    printf("unsigned long long : %zu octet(s)\n\n", sizeof(unsigned long long int));

    // Types réels
    printf("float              : %zu octet(s)\n", sizeof(float));
    printf("double             : %zu octet(s)\n", sizeof(double));
    printf("long double        : %zu octet(s)\n", sizeof(long double));

    return 0;
}

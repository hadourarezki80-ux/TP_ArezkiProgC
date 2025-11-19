#include <stdio.h>
#include <stdint.h>   // pour uint64_t et memcpy si nécessaire
#include <string.h>

// Fonction utilitaire : affiche une valeur brute en hexadécimal, octet par octet
void print_hex(void *ptr, size_t size) {
    unsigned char *p = (unsigned char *)ptr;
    for (size_t i = 0; i < size; i++) {
        printf("%02x", p[i]);
    }
}

int main() {

    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x12345678ABCDEF00;
    long long int lli = 0x1122334455667788;
    float f = 0.0f;           // sera modifié
    double d = 0.0;           // sera modifié
    long double ld = 0.0L;    // sera modifié

    // Pointeurs
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("\n===== AVANT MANIPULATION =====\n\n");

    printf("Adresse de c  : %p, Valeur : ", (void*)pc);
    print_hex(pc, sizeof(char));
    printf("\n");

    printf("Adresse de s  : %p, Valeur : ", (void*)ps);
    print_hex(ps, sizeof(short));
    printf("\n");

    printf("Adresse de i  : %p, Valeur : ", (void*)pi);
    print_hex(pi, sizeof(int));
    printf("\n");

    printf("Adresse de li : %p, Valeur : ", (void*)pli);
    print_hex(pli, sizeof(long int));
    printf("\n");

    printf("Adresse de lli: %p, Valeur : ", (void*)plli);
    print_hex(plli, sizeof(long long int));
    printf("\n");

    printf("Adresse de f  : %p, Valeur : ", (void*)pf);
    print_hex(pf, sizeof(float));
    printf("\n");

    printf("Adresse de d  : %p, Valeur : ", (void*)pd);
    print_hex(pd, sizeof(double));
    printf("\n");

    printf("Adresse de ld : %p, Valeur : ", (void*)pld);
    print_hex(pld, sizeof(long double));
    printf("\n");


    /* ===========================================
       MANIPULATION PAR LES POINTEURS
       =========================================== */

    *pc = 0x34;
    *ps = 0x5678;
    *pi = 0xAABBCCDD;
    *pli = 0x9988776655443322;
    *plli = 0xFFEEDDCCBBAA0099;

    *pf = 1.0f;      // représenté en hex = 3f800000
    *pd = 1.0;       // IEEE754 double
    *pld = 1.0L;     // dépend de la représentation, souvent 80 bits


    printf("\n===== APRÈS MANIPULATION =====\n\n");

    printf("Adresse de c  : %p, Valeur : ", (void*)pc);
    print_hex(pc, sizeof(char));
    printf("\n");

    printf("Adresse de s  : %p, Valeur : ", (void*)ps);
    print_hex(ps, sizeof(short));
    printf("\n");

    printf("Adresse de i  : %p, Valeur : ", (void*)pi);
    print_hex(pi, sizeof(int));
    printf("\n");

    printf("Adresse de li : %p, Valeur : ", (void*)pli);
    print_hex(pli, sizeof(long int));
    printf("\n");

    printf("Adresse de lli: %p, Valeur : ", (void*)plli);
    print_hex(plli, sizeof(long long int));
    printf("\n");

    printf("Adresse de f  : %p, Valeur : ", (void*)pf);
    print_hex(pf, sizeof(float));
    printf("\n");

    printf("Adresse de d  : %p, Valeur : ", (void*)pd);
    print_hex(pd, sizeof(double));
    printf("\n");

    printf("Adresse de ld : %p, Valeur : ", (void*)pld);
    print_hex(pld, sizeof(long double));
    printf("\n");

    return 0;
}

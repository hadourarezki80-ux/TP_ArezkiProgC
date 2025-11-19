#include "operator.h"

int somme(int num1, int num2) {
    return num1 + num2;
}

int difference(int num1, int num2) {
    return num1 - num2;
}

int produit(int num1, int num2) {
    return num1 * num2;
}

int quotient(int num1, int num2) {
    if (num2 == 0) return 0; // Éviter la division par zéro
    return num1 / num2;
}

int modulo(int num1, int num2) {
    if (num2 == 0) return 0;
    return num1 % num2;
}

int et_logique(int num1, int num2) {
    return num1 & num2; // opérateur bit-à-bit
}

int ou_logique(int num1, int num2) {
    return num1 | num2; // bit-à-bit
}

int negation(int num1) {
    return ~num1; // négation bit-à-bit
}

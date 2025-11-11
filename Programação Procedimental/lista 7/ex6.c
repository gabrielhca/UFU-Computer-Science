#include <stdio.h>

// Definindo o tipo bool usando enum
typedef enum {
    false = 0,
    true = 1
} bool;

int main() {
    bool isTrue = true;
    bool isFalse = false;

    if (isTrue) {
        printf("isTrue é verdadeiro\n");
    }

    if (!isFalse) {
        printf("isFalse é falso\n");
    }

    return 0;
}
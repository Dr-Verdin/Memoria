#include <stdio.h>

int main(void) {
    short unsigned int A, B, C;
    long long int memorizador;

    scanf ("%hu %hu %hu", &A, &B, &C);
    
    memorizador = C;
        memorizador <<= 16;
    memorizador = memorizador+B;
        memorizador <<= 16;
    memorizador = memorizador+A;
    
    printf ("%lld\n", memorizador);

    return 0;
}
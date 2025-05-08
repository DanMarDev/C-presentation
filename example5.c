#include <stdlib.h>

int main() {
    int *leaky = malloc(10 * sizeof(int));
    leaky[0] = 42;
    // Forgot to free(leaky)
    return 0;
}


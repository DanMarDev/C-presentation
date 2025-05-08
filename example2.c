#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &p);
    printf("Pointer p points to value: %d\n", *p);
    printf("Address of p: %p\n", &p);

    return 0;
}


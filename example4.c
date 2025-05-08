#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    for (int i = 0; i < 5; i++) {
        printf("Value at index %d: %d, Address: %p\n", i, *(ptr + i), (ptr + i));
    }

    return 0;
}


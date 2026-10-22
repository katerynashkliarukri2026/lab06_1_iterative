
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include "functions.h"

int main()
{
    const int n = 22;
    int b[n];

    srand(static_cast<unsigned int>(time(nullptr)));

    fillArray(b, n);

    printf("Initial array:\n");
    printArray(b, n);

    int count = countElements(b, n);
    int sum = sumElements(b, n);

    replaceElements(b, n);

    printf("Count: %d\n", count);
    printf("Sum: %d\n", sum);
    printf("Modified array:\n");
    printArray(b, n);

    return 0;
}

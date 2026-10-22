
#include "functions.h"
#include <cstdlib>
#include <cstdio>

void fillArray(int b[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = rand() % 91 - 40;
    }
}

void printArray(const int b[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", b[i]);
    }
    printf("\n");
}

bool isSelected(const int x)
{
    return !(x > 0 && x % 5 == 0);
}

int countElements(const int b[], const int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (isSelected(b[i]))
        {
            count++;
        }
    }

    return count;
}

int sumElements(const int b[], const int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (isSelected(b[i]))
        {
            sum += b[i];
        }
    }

    return sum;
}

void replaceElements(int b[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isSelected(b[i]))
        {
            b[i] = 0;
        }
    }
}

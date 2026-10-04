#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *a, int *b);
void selection_sort(int a[], int b);
int binary_search(const int a[], int b, int c);

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void selection_sort(int a[], int b)
{
    int c, d;

    for (c = 0; c < b - 1; c++)
    {
        int e = c;

        for (d = c + 1; d < b; d++)
        {
            if (a[d] < a[e])
                e = d;
        }

        if (e != c)
            swap(&a[c], &a[e]);
    }
}

int binary_search(const int a[], int b, int c)
{
    int d = 0;
    int e = b - 1;

    while (d <= e)
    {
        int f = (d + e) / 2;

        if (a[f] == c)
            return f;
        else if (a[f] < c)
            d = f + 1;
        else
            e = f - 1;
    }

    return -1;
}

int main(void)
{
    int a[5];
    int b, c;

    for (b = 0; b < 5; b++)
        scanf("%d", &a[b]);

    scanf("%d", &c);

    selection_sort(a, 5);

    for (b = 0; b < 5; b++)
        printf("%d ", a[b]);
    printf("\n");

    printf("%d\n", binary_search(a, 5, c));

    return 0;
}
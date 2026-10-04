#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char a[80];
    int b = 0, c = 0, d = 0, e = 0;

    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';

    while (a[b] != '\0')
    {
        if (isdigit((unsigned char)a[b]))
            c++;

        a[b] = (char)toupper((unsigned char)a[b]);

        if (a[b] != ' ' && a[b] != '\t')
        {
            if (d == 0)
                e++;

            d = 1;
        }
        else
        {
            d = 0;
        }

        b++;
    }

    printf("%s\n", a);
    printf("digits=%d, words=%d\n", c, e);

    return 0;
}

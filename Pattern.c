#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE *a;
    char b[256];

    a = fopen("pattern1.txt", "r");

    if (a == NULL)
    {
        printf("pattern1.txt 파일을 열 수 없습니다.\n");
        return 1;
    }

    while (fgets(b, sizeof(b), a) != NULL)
        printf("%s", b);

    fclose(a);

    return 0;
}

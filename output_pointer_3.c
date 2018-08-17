#include<stdio.h>

int main()
{
    char str[] = "peace";
    char *s = str;
    char *p = s++ + 1;
    printf("%s\n", p);
    return 0;
}

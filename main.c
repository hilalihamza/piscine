#include <stdio.h>

int match (char *s1, char *s2);
int nmatch(char *s1, char *s2);

int main (int argc, char **argv)
{
    argc = 1;
    printf("%d", nmatch(argv[1], argv[2]));
    return (0);
}

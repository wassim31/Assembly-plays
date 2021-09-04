#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *n = NULL;
    n = malloc(sizeof(int));
    *n = 5;
    printf("%d", *n);
    int t = 0;
    t = t + *n;
    printf("%d", t);
    return 0;
}

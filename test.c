#include <stdio.h>
#include <stdlib.h>

int main () {
    puts("hi mom");
    char *val = malloc(5);
    val[0] = 'h';
    val[1] = 'i';
    val[3] = '\0';
    puts(val);
    free(val);
    return 0;
}
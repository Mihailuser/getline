#include <stdio.h>
#include <stdlib.h>
#include "getline.h"

int main(int argc, char **argv){
    FILE *f = fopen("test.txt", "r");
    char *text = getline(f, 12);
    printf("%s", text);/*will print Hello, world!*/
    free(text);
    return 0;
}

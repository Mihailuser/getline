#include <stdio.h>
#include <stdlib.h>
#include "getline.h"

char *getline(FILE *f, unsigned int max_str_len){
    char *res = malloc(max_str_len+1);
    char c;
    if(f == NULL){
        perror("Error");
        return 0;
    }
    for(int i = 0; c!='\n'; i++){
        c = getc(f);
        res[i] = c;
    }
    return res;
}
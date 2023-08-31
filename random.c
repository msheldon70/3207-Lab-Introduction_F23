#include <stdlib.h>

char randchar(){
    char r = 'A' + (random() % 26);
    return r;
}
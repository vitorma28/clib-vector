#include <stdlib.h>

struct vector {
    unsigned long long elem_count_max;
    unsigned long long elem_count;
    unsigned long long elem_size;
    char * elems;
};

#include <stdio.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array {
    int size;
    int* array;
} integer_array;
#endif
void my_first_struct(integer_array* param_1) {
    printf("%d\n", param_1 -> size);
    for(int  jk = 0; jk < param_1 -> size; jk++) {
        printf("%d\n", param_1 -> array[jk]);
    }
}
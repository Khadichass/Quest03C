#include <stdio.h>
#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array {
    int size;
    int* array;
} integer_array;
#endif
bool my_is_sort(integer_array* param_1) {
    for(int jk = 1; jk < param_1 -> size - 1; jk++) {
        if(param_1 -> array[jk] > param_1 -> array[jk - 1] && param_1 -> array[jk] > param_1 -> array[jk + 1]) {
            return false;
        }
        if(param_1 -> array[jk] < param_1 -> array[jk - 1] && param_1 -> array[jk] < param_1 -> array[jk + 1]) {
            return false;
        }
    }
    return true;
}
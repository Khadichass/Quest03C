#include "stdio.h"
#include "stdio.h"
char* my_strncpy(char* param_1, char* param_2, int param_3)
{
      for (int i=0; i < param_3 && param_2[i] != 0; i++) {
          param_1[i] = param_2[i];
      }
      return param_1;
}
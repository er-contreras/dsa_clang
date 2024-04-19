#include <stdlib.h>

// Pointer operations in returning storage dynamically allocated in a function
int g(int **iptr) {
  if ((*iptr = (int *)malloc(sizeof(int))) == NULL)
    return -1;

  return 0;
}

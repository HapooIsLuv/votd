#ifndef ELEMENT_H
#define ELEMENT_H

#include <stdint.h>
#include <stdbool.h>

struct element {
  char name[64];
  uint_32 id;
  bool finished;
}


//TODO add category, parent project, etc
#endif


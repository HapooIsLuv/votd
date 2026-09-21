#ifndef ELEMENT_H
#define ELEMENT_H

#include <stdint.h>
#include <stdbool.h>

typedef struct {
  char name[64];
  unsigned int id;
  bool finished;
} Todo;

int read_todo_name(char* name, size_t size);
int init_todo(Todo* todo, const char* todoName);

#endif


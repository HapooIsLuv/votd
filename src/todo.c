#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "todo.h"
#include "votd.h"

int read_todo_name(char* name, size_t size) {
  printf("Name: ");

  if (fgets(name, size, stdin) == NULL) {
    perror("Reading todo name failed...\n");
    return 1;
  }

  // remove new line
  name[strcspn(name, "\n")] = 0;

  printf("ok. Name: %s\n", name);
  return 0;
}

int init_todo(Todo* todo, const char* todoName) {
  if (strlen(todoName) >= sizeof(todo->name)) {
    return 1;
  }
  strncpy(todo->name, todoName, MAX_STR_SIZE);
  todo->id = 0;
  todo->finished = false;

  return 0;
}


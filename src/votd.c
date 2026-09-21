#include <stdio.h>
#include <string.h>

#include "../config.h"
#include "votd.h"
#include "todo.h"

void op_add() {
  printf("adding todo...\n");


  char name[MAX_STR_SIZE];
  if (read_todo_name(name, MAX_STR_SIZE) > 0) {
    return;
  } 
  printf("DBG: %s\n", name);
  
  return;
}

void op_rm() {
  printf("removing...\n");

  char name[MAX_STR_SIZE];

  if (read_todo_name(name, MAX_STR_SIZE) > 0) {
    return;
  }
  
  printf("DBG: %s\n", name);
  
  return;
}

int main(int argc, char** argv) {
  printf("votd-%s\n", VOTD_VER);

  // check if there is any argv given
  if (argc > 1) {
    // show operation menu
    if (strcmp(argv[1], "add") == 0) {
      op_add();
    } else if (strcmp(argv[1], "rm") == 0) {
      op_rm();
    } else {
      printf("invalid option!\nHalting\n");
    }
  } 


  printf("%s\n", TODO_INTRO_TEXT);
  

  return 0;
}

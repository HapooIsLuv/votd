CC = gcc
CFLAGS = -Wall -g -std=c99

SRCS = src/votd.c src/todo.c

OBJ_DIR = build
OBJS = $(patsubst src/%.c,$(OBJ_DIR)/%.o,$(SRCS))
TARGET = votd

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: src/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR) $(TARGET)

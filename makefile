CC = gcc
CFLAGS = -Wall -g -std=c99

SRCS = src/votd.c src/todo.c
OBJS = $(SRCS:.c=.o)
TARGET = votd

BUILD_DIR = build
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJS) $(TARGET)


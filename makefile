# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Object files
OBJ = string_sort.o file_ops.o main.o

# Include 
OBJ += double_ptr.o

# Executable name
TARGET = sort_strings

# Phony targets
.PHONY: all clean

# Default target
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(OBJ)
	$(CC) -o $@ $(OBJ)

# Compile file_ops.o
file_ops.o: file_ops.c
	$(CC) $(CFLAGS) -c file_ops.c

# Compile string_sort.o
string_sort.o: string_sort.c
	$(CC) $(CFLAGS) -c string_sort.c


# Compile main.o
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

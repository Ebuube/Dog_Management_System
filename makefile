
CC=gcc
BIN=bin
SRC=src
# compiler flags:
# -g : adds debugging information to the executable file
#  -Wall : turns on most, but not all compiler warnings
CFLAGS = -g -Wall -pedantic -Werror -Wextra -std=gnu89

# the build target executable:
TARGET=main

all: $(BIN)/$(TARGET)

$(BIN)/$(TARGET): $(SRC)/*.c $(SRC)/*.h
	$(CC) $(CFLAGS) $(SRC)/*.c -o $(BIN)/$(TARGET)

clean:
	$(RM) $(BIN)/*

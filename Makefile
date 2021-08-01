CC=gcc
CFLAGS=-Wall
SOURCES=src/main.c src/passgen.h src/passgen.c
EXECUTABLE=passgen
BUILD_DIR=build

all:
	mkdir -p $(BUILD_DIR) && cd
	$(CC) $(CFLAGS) $(SOURCES) -o $(EXECUTABLE) 
	mv $(EXECUTABLE) $(BUILD_DIR)

run:
	./build/$(EXECUTABLE)

clean:
	rm -rf $(BUILD_DIR)

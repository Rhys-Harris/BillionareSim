all: build run

build:
	gcc -o dev.exe *.c -lraylib -lgdi32 -lwinmm

run:
	dev.exe

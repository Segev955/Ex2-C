
CC=gcc
Ar=ar
FLAGS = -Wall -g
NAME = connections
OBJECT_MAIN= main.o my_mat.o

all: $(OBJECT_MAIN)
	$(CC) $(FLAGS) -o $(NAME)
	
main.o: my_mat.h main.c
	$(CC) $(FLAGS) -o main.c
my_mat.o: my_mat.h my_mat.c
	$(CC) $(FLAGS) -o my_mat.c

.PHONY: clean all

clean:
	rm-f -f *.o *.a *.so $(NAME)

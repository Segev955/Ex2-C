CC=gcc
Ar=ar
FLAGS = -Wall -g
OBJECT_MAIN=main.o my_mat.o

all: main.o my_mat.o connections

connections: $(OBJECT_MAIN)
	$(CC) $(FLAGS) -o connections $(OBJECT_MAIN)
	
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c
	
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so $(NAME)

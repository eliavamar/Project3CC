CC=gcc
OBJECT_ISORT=main.o
OBJECT_FUNCO=func.o
.PHONY: clean all
FLAGS=-Wall -g 

isort: $(OBJECT_ISORT) 
	$(CC) $(FLAGS) -o isort $(OBJECT_ISORT)

txtfind: $(OBJECT_FUNCO)
	$(CC) $(FLAGS) -o txtfind $(OBJECT_FUNCO)

main.o: main.c
	$(CC) $(FLAGS) -c main.c

func.o: func.c
	$(CC) $(FLAGS) -c func.c

all: isort txtfind
clean:
	rm -f txtfind isort  *.o




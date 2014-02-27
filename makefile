all: test

test : main.o arc.o noeud.o graphe.o 
	gcc -o test main.o arc.o noeud.o graphe.o

main.o : main.c main.h globals.h
	gcc -c main.c

arc.o : arc.c arc.h globals.h
	gcc -c arc.c

noeud.o : noeud.c noeud.h globals.h
	gcc -c noeud.c

graphe.o : graphe.c graphe.h globals.h
	gcc -c graphe.c

clean :
	rm test main.o noeud.o arc.o graphe.o
/**
*
*   Coût
*   Tableau avec 
*
*/
#ifndef NOEUD_H
	#define NOEUD_H

	#include <stdio.h>
	#include <unistd.h>
	#include <stdlib.h>

	typedef struct struct_node
	{
	    int view;
	    int current_previous;
	    int current_next;
	    int size_next;
	    int size_previous;
	    int level;

	    // tableau des indices du edges_array
	    int * previous_edges_ind_array;
	    int * next_edges_ind_array;

	} node;

	node * initialize_node(int size_previous, int size_next);

#endif
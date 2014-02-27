/**
*
*   Ensemble de noeud et d'arc
*
*/
#ifndef GRAPHE_H
	#define GRAPHE_H

	#include "arc.h"
	#include "noeud.h"

	#include <stdio.h>
	#include <unistd.h>
	#include <stdlib.h>

	typedef struct struct_node node;
	typedef struct struct_edge edge;

	typedef struct struct_graph
	{
	    int size;
	    int edge_count;
	    node * starter;
	    node * nodes_array[100];
	} graph;


	graph * initialize_graph(node * m_starter, int size, int edge_count);
	void add_node(graph * m_graph, node * m_node);
	void display_graph(graph * graph);

#endif
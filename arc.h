/**
*
*   Edge
*   
*
*/

#ifndef ARC_H
	#define ARC_H

	#include "globals.h"
	#include "noeud.h"

	#include <stdio.h>
	#include <unistd.h>
	#include <stdlib.h>

	typedef struct struct_edge
	{
	    int weight;
	    int cost;
	    node * starter;
	    node * ender;
	} edge;

	edge * initialize_edge(node * m_node, node * m_node_child, int weight, int cost);
	void link_node(edge * m_edge);

#endif

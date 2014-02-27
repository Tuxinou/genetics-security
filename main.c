/**
*
*   Main

On doit faire 2 tableaux.
Un tableau représentant les noeuds pointant vers l'index de leur suivant
Un tableau représentant les suivants
Un tableau représentant les précédents ?

*
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

edge * edges_array[100];
int current_edge = 0;
int current_node = 0;
int main(int argc, char const *argv[])
{
    /* code */
    // argc 1 = nombre de noeuds

    node * m_node_0 = initialize_node(0, 2);
    node * m_node_1 = initialize_node(1, 0);
    node * m_node_2 = initialize_node(1, 0);
    node * m_node_3 = initialize_node(2, 0);

    edge * m_edge_0_1 = initialize_edge(m_node_0, m_node_1, 1, 4);
    edge * m_edge_0_2 = initialize_edge(m_node_0, m_node_2, 2, 5);
    edge * m_edge_0_3 = initialize_edge(m_node_0, m_node_2, 6, 5);
    edge * m_edge_1_3 = initialize_edge(m_node_1, m_node_3, 3, 6);
    
	graph * m_graph = initialize_graph(m_node_0, 4, 4);
	add_node(m_graph, m_node_1);
	add_node(m_graph, m_node_2);
	add_node(m_graph, m_node_3);

    display_graph(m_graph);  

    return 0;
}

graph * initialize_graph(node * m_starter, int size, int edge_count)
{
	graph * m_graph = malloc(1 * sizeof(graph));
    m_graph->size = size;
    m_graph->edge_count = edge_count;
    m_graph->starter = m_starter;

    add_node(m_graph, m_starter);
    return m_graph;
}

void add_node(graph * m_graph, node * node)
{
	m_graph->nodes_array[current_node] = node;
	current_node++;
}

node * initialize_node(int size_previous, int size_next)
{
	node * m_node = malloc(1 * sizeof(node));
    m_node->size_next = size_next;
    m_node->size_previous = size_previous;

	m_node->view = 0;
    m_node->current_previous = 0;
    m_node->current_next = 0;
    m_node->level = 0;

    m_node->previous_edges_ind_array = malloc(size_previous * sizeof(int));
    m_node->next_edges_ind_array = malloc(size_next * sizeof(int));

    return m_node;
}

void link_node(edge * m_edge)
{
	// edges_array[current_edge] = malloc(1 * sizeof(edge));

	edges_array[current_edge] = m_edge;

	m_edge->starter->next_edges_ind_array[m_edge->starter->current_next] = current_edge;
	m_edge->ender->previous_edges_ind_array[m_edge->starter->current_previous] = current_edge;

	// on incrémente 
	current_edge++;
	m_edge->starter->current_next++;
	m_edge->starter->current_previous++;
}

edge * initialize_edge(node * m_node, node * m_node_child, int weight, int cost)
{	
	edge * m_edge = malloc(1 * sizeof(edge));
	m_edge->cost = cost; 
	m_edge->weight = weight; 
	m_edge->starter = m_node; 
	m_edge->ender = m_node_child;

	link_node(m_edge);

	return m_edge;
}

void display_graph(graph * m_graph)
{
    printf("%i\n", m_graph->size);
    int end = m_graph->size;
    int i = 0;
    for(i = 0; i < m_graph->edge_count; i++)
    {
    	// edge * m_edge = edges_array[i]->weight;
    	printf("Noeud n%d avec la taille suivant %d\n", i, m_graph->nodes_array[i]->size_next);
    	int j = 0;
    	for(j = 0; j <= m_graph->nodes_array[i]->size_next; j++)
    	{
    		edge * m_edge = edges_array[m_graph->nodes_array[i]->next_edges_ind_array[j]];
        	printf("Arc n %i avec comme poids : %d et coût : %d\n", j, m_edge->weight, m_edge->cost);
    	}
    	printf("\n");
    }
}
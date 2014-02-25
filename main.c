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

int main(int argc, char const *argv[])
{
    /* code */
    // argc 1 = nombre de noeuds

    node * m_node_0 = initialize_node(2, 0);
    node * m_node_1 = initialize_node(1, 1);
    node * m_node_2 = initialize_node(0, 1);
    node * m_node_3 = initialize_node(0, 1);

    edge * m_edge_0_1 = initialize_edge(m_node_0, m_node_1, 1, 4);
    edge * m_edge_0_2 = initialize_edge(m_node_0, m_node_2, 2, 5);
    edge * m_edge_1_3 = initialize_edge(m_node_1, m_node_3, 3, 6);

    //printf("Poids : %d de %d et %d\n", m_edge->cost, m_edge->ender->level, m_node_start->level);

    graph * m_graph = initialize_graph(m_node_0, 6, 7);

    display_graph(m_graph);  

    return 0;
}

graph * initialize_graph(node * m_starter, int size, int edge_count)
{
	graph * m_graph = malloc(1 * sizeof(graph));
    m_graph->size = size;
    m_graph->starter = m_starter;

    m_graph->nodes_array = malloc(size * sizeof(node));
    m_graph->edges_array = malloc(edge_count * sizeof(edge));
    return m_graph;
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

void link_node(node * m_node, node * m_node_child, int weight, int cost)
{
	edge * m_edge = initialize_edge(m_node, m_node_child, weight, cost);

	//m_node->previous_edges_ind_array[m_node->current_previous++] = 
}

edge * initialize_edge(node * m_node, node * m_node_child, int weight, int cost)
{	
	edge * m_edge = malloc(1 * sizeof(edge));
	m_edge->cost = cost; 
	m_edge->weight = weight; 
	m_edge->starter = m_node; 
	m_edge->ender = m_node_child;

	return m_edge;
}

void display_graph(graph * m_graph)
{
    printf("%i\n", m_graph->size);
    int end = m_graph->size;
    int i = 0;
    for(i = 0; i < end; i++)
    {
        printf("Taille du suivant %i\n", m_graph->starter->size_next);
    }
}
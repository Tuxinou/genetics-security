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

    graph m_graph;
    node m_node_start;
    node m_node_end;

    initialize_node(&m_node_start);
    initialize_graph(&m_graph, &m_node_start, &m_node_end, 0);

    display_graph(&m_graph);  

    return 0;
}

void initialize_graph(graph * m_graph, node * m_starter, node * m_ender, int size)
{
    m_graph->size = 0;
    m_graph->starter = m_starter;
    m_graph->ender = m_ender;
    m_graph->nodes_array = malloc(size * sizeof(node));
}

void initialize_node(node * m_node)
{
    m_node->size_next = 0;
    m_node->size_previous = 0;
    m_node->current_node_previous = 0;
    m_node->current_node_next = 0;

    m_node->level = 0;
    m_node->previous_nodes_array = malloc(size_previous * sizeof(edge));
    m_node->next_nodes_array = malloc(size_next * sizeof(edge));
}

void link_node(node * m_node, node * m_node_child)
{

	m_node->next_nodes_array
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
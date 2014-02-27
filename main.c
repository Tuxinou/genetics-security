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

#include "graphe.h"

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
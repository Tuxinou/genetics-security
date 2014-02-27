#include "graphe.h"

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
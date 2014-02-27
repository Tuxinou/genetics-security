#include "arc.h"

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
#include "noeud.h"

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
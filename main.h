/**
*
*   Coût
*   Tableau avec 
*
*/
typedef struct struct_node node;
typedef struct struct_edge edge;

typedef struct struct_graph
{
    int size;
    node * starter;
    node * ender;
    node * nodes_array;
    edge * edges_array;
} graph;

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

typedef struct struct_edge
{
    int weight;
    int cost;
    node * starter;
    node * ender;
} edge;

node * initialize_node(int size_previous, int size_next);
graph * initialize_graph(node * m_starter, node * m_ender, int size, int edge_count);
edge * initialize_edge(node * m_node, node * m_node_child, int weight, int cost);

void link_node(node * m_node, node * m_node_child, int weight, int cost);
void display_graph(graph * graph);


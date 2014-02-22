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
} graph;

typedef struct struct_node
{
    int size_next;
    int size_previous;
    int level;
    edge * previous_nodes_array;
    edge * next_nodes_array;

} node;

typedef struct struct_edge
{
    int weight;
    int cost;
    node * starter;
    node * ender;
} edge;

void initialize_node(node * node);
void initialize_graph(graph * m_graph, node * m_starter, node * m_ender, int size);
void initialize_edge(edge * edge);

void add_node(node * node);
void display_graph(graph * graph);


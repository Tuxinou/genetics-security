/**
*
*   Coût
*   Tableau avec 
*
*/

struct struct_node
{
    int size;
    int * next_nodes_array;
};

void initialize(int size) 
{ 
    struct struct_node node;
    node.size = size; 
    node.next_nodes_array = malloc(size * sizeof(int)); 
}
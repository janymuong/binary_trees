# Binary Trees
> `C`, `Binary Trees`, `Algorithms & Data Structures`  

`Binary Trees` are data structures consisting of nodes connected through edges. Each node in a binary tree can have at most two child nodes, referred to as the left child and the right child.  
This project could potentially be extended to cover `Binary Heap`, `Binary Search Trees`, and `AVL Tree`.

## Features and Characteristics

| Feature                | Description                                                                                                      |
|------------------------|------------------------------------------------------------------------------------------------------------------|
| Root Node              | The topmost node of a binary tree is called the root node. It serves as the starting point for traversing the tree. |
| Child Nodes            | Each node in a binary tree can have at most two child nodes: a left child and a right child.                      |
| Parent Nodes           | Nodes that have child nodes are referred to as parent nodes.                                                       |
| Leaf Nodes             | Nodes that do not have any child nodes are called leaf nodes or terminal nodes.                                    |
| Binary Search Property | In a binary search tree, the left child of a node contains a value less than the node itself, while the right child contains a value greater than the node. |
| Traversal              | Binary trees can be traversed in different ways, such as in-order, pre-order, and post-order traversal, to access or process the nodes in a specific order. |


## <span style="border-bottom: 2px solid; padding-bottom: 5px;">Implementation</span>  
**Binary Trees** can be implemented in C using structs. Each node typically contains a value and references to its *left* and *right* children.

`Basic Binary Tree`:
```bash
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

## Compilation:
Sample compilation for creating a new node, and running the executables. 
```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node && ./0-node
```

## Applications  
> **Note**  
> Binary Trees have various applications, including:  
>> **`Searching`**: Binary search trees offer efficient searching capabilities, as they allow for quick lookup and retrieval of values.  
>> **`Sorting`**: Binary trees can be used to efficiently sort data by inserting elements into the tree and then performing an in-order traversal to retrieve them in sorted order.  
>> **`Hierarchical Structures`**: Binary trees are used to represent hierarchical structures like file systems, organization charts, and family trees.  
>> **`Expression Evaluation`**: Binary expression trees are used to parse and evaluate mathematical expressions.

## Authors:
You can find the developers/contributors to this project in the [AUTHORS](./AUTHORS) file.

## [LICENSE](./LICENSE)

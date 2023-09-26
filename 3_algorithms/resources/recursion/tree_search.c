#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node* left;
    struct node* right;
} node;

node* create_tree(int depth);
void search_tree(node* root, int target);
void free_tree(node* root);

int main (void) {
    // Create a tree with depth 3!
    node* root = create_tree(3);

    // If it failed, crash out
    if (!root) {
        printf("Tree creation issue, very sad :(\n");
        return 1;
    }

    // Search for some target
    search_tree(root, 4);

    // Free all the memory we used!
    free_tree(root);
}


/*
    Creates the tree of depth 'depth' using recursion.
*/
node* create_tree(int depth) {

    // If we are at the bottom of the tree, stop!
    if (!depth){
        return NULL;
    }

    // Create a new node!
    node* new_node = malloc(sizeof(node));
    if (!new_node) {
        // Malloc error very sad. This part of the tree withers and dies.
        return NULL;
    }

    // Give our node a value!
    (*new_node).val = rand() % 10;

    // Uncomment here to think about tree construction
    // printf("%i\n", (*new_node).val);

    // Continue building the tree at lower levels!
    (*new_node).left = create_tree(depth - 1);
    (*new_node).right = create_tree(depth - 1);
    return new_node;
}

/*
    Searches through a tree from a root and prints 'Found!' anytime the target value is found.
*/
void search_tree(node* root, int target) {
    // If not at a node, return
    if (!root) {
        return;
    }

    // Otherwise, check if where we are has the right value!
    if ((*root).val == target) {
        printf("Found!\n");
    }

    // Search the remainder of the tree!
    search_tree((*root).left, target);
    search_tree((*root).right, target);
}

void free_tree(node* root) {
    // If no node, nothing to free
    if (!root) {
        return;
    }
    // Otherwise free the lower levels first
    free_tree((*root).left);
    free_tree((*root).right);

    // And then free our current node. Must do this order since if we free root first, 
    // (*root).left is meaningless/undefined, same for (*root).right
    free(root);
}
#include <stdlib.h>
#include <stdio.h>

MIN_HEAP = 0;
MAX_HEAP = 1;

struct _Node {
  int value;
  struct _Node *left;
  struct _Node *right;
};

typedef struct _Node Node;

typedef struct {
  int type;
  Node *root;
} Heap;

Heap* create_heap(int type) {
  Heap *heap;
  heap = (Heap *)malloc(sizeof(Heap));
  heap->type = type;
  return heap;
}

int main() {
  Heap *h;
  Node *r;
  h = create_heap(MIN_HEAP);
  r = (Node *)malloc(sizeof(Node));
  r->left = NULL;
  r->right = NULL;
  r->value = 10;
  h->root = r;
  printf("%d\n", h->root->value);
  //h.insert();
  return 1;
}

/*
int find_max() {

}

int find_min() {

}

void insert() {

}
*/
// def merge () {}

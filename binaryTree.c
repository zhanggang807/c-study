#include <stdio.h>

typedef int DataType;

typedef struct node{
	DataType data;
	struct node *lchild, *rchild;
} BinTNode;

typedef BinTNode *BinTree;



#include <stdio.h>

typedef int DataType;

typedef struct node{
	Datatype data;
	struct node *lchild, *rchild;
} BinTNode;

typedef BinTNode *BinTree;



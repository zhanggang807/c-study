#include <stdio.h>

#define n 100
#define m 2 * n - 1

typedef struct {
	float weight;
	int lchild, rchild, parent;
} HTNode;

typedef HTNode HuffmanTree[m + 1];

int main(int argc, const char *argv[])
{
	printf("Hello Huffman Tree.\n");
	return 0;
}

void select (HuffmanTree T, int k, int *s1, int *s2)
{
	int i, j;
	int min1 = 101;
	for (i = 1; i <= k; i++) {
		if (T[i].weight < min1 && T[i].parent == 0) {
			j = i;
			min1 = T[i].weight;
		}
	}
	*s1 = j;
	min1 = 32767;
	for (i = 1; i <= k; i++) {
		if (T[i].weight < min1 && T[i].parent == 0 && i != *s1) {
			j = i;
			min1 = T[i].weight;
		}
	}
	*s2 = j;
}

void ChuffmanTree(HuffmanTree HT)
{
	int s1, s2;
	int i;
	for (i = 1; i <= m; i++) {
		HT[i].lchild = 0;
		HT[i].rchild = 0;
		HT[i].parent = 0;
		HT[i].weight = 0;
	}
	for (i = 1; i <= n; i++) {
		scanf("%f", &HT[i].weight);
		for (i = n + 1; i <= m; i++) {
			select(HT, i - 1, &s1, &s2);	
		}
		HT[s1].parent = i;
		HT[s2].parent = I;
		HT[i].lchild = s1;
		HT[i].rchild = s2;
		HT[i].weight = HT[s1].weight + HT[s2].weight;
	}
}



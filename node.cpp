#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 100
typedef int element_type;
typedef struct node {

	element_type element;
	struct node *left, *right;
} NODE;
NODE *queue[MAX + 1];
int front, rear, queue_size;
void khoi_tao_queue()
{
	front = rear = 0;
	queue_size = 0;
}
int is_empty()
{
	return (queue_size == 0);
}
int is_full()
{
	return (queue_size == MAX);
}
int push(NODE *value)
{
	if (queue_size < MAX)
	{
		queue_size++;
		queue[rear++] = value;
		if (rear == MAX)
			rear = 0;
}
	return rear;
}
int pop(NODE **value)
{
	if (queue_size > 0)
	{
		*value = queue[front++];
		if (front > MAX)
			front = 0;
		queue_size--;
	}
	return front;
}
NODE *root;
void khoi_tao_cay(NODE ** root)
{
	*root = NULL;
}
void insert(NODE *tmp, NODE **root)
{
	if (tmp->element < (*root)->element)
	if ((*root)->left)
		insert(tmp, &(*root)->left);
	else
		(*root)->left = tmp;
	else
	if ((*root)->right)
		insert(tmp, &(*root)->right);
	else

	(*root)->right = tmp;

}

void insert_node(element_type e, NODE **root)

{

	NODE *tmp;

	tmp = (NODE *)malloc(sizeof(NODE));

	tmp->element = e;

	tmp->left = NULL;

	tmp->right = NULL;

	if (*root == NULL)

		*root = tmp;

	else

		insert(tmp, root);

}

void nhap_cay(NODE **root)

{

	element_type e;

	do {

		printf("nNhap element (-1 de ket thuc) : ");

		scanf("%d", &e);

		if (e != -1)

			insert_node(e, root);

	} while (e != -1);

}

void duyet_cay_level(NODE *root)

{

	NODE *p;

	khoi_tao_queue();

	if (root != NULL)
		push(root);

	while (!is_empty())
	{
		pop(&p);
		printf("%d ", p->element);
		if (p->left != NULL)
			push(p->left);
		if (p->right != NULL)
			push(p->right);
	}
}

int main()
{

	khoi_tao_cay(&root);
	nhap_cay(&root);
	duyet_cay_level(root);
	getch();
}
#include<stdio.h>
#include<stdlib.h>
typedef struct _node
{
	int data;
	struct _node* link;
} node;
node* getNode()
{
	node *temp = (node*)malloc(sizeof(node));
	temp->data = 0;
	temp->link = NULL;
	return temp;
}
int main()
{
	node *L = getNode();
	printf("\n(1) create L\n");
	printf("L->data = %d\n", L->data);
	printf("L->link = %d\n", L->link);
	printf("L->data address = %d\n", &L->data);
	printf("L->link address = %d\n", &L->link);
	printf("L`s address = %d\n",&L);
	printf("L`s value = %d\n",L);
	
	node *new1 = getNode();
	L->data = 5;
	printf("\n(2) create new1\n");
	printf("L->data = %d\n", new1->data);
	printf("L->link = %d\n", new1->link);
	printf("L->data address = %d\n", &new1->data);
	printf("L->link address = %d\n", &new1->link);
	printf("L`s address = %d\n",&new1);
	printf("L`s value = %d\n",new1);
	
	L->link = new1;
	
	printf("\n(3)\n");
	printf("L->data = %d\n", L->data);
	printf("L->link = %d\n", L->link);
	printf("L->data address = %d\n", &L->data);
	printf("L->link address = %d\n", &L->link);
	printf("L`s address = %d\n",&L);
	printf("L`s value = %d\n",L);
	printf("\n(4)\n");
	printf("L->link->data = %d\n", L->link->data);
	printf("L->link->link = %d\n", L->link->link);
	printf("L->link->data address = %d\n", &L->link->data);
	printf("L->link address = %d\n", &L->link->link);
	printf("L->link`s address = %d\n",&L->link);
	printf("L->link`s value = %d\n",L->link);
	
	node *new2 = getNode();
	new2->data = 15;
	node* pre = L;
	new2->link = pre->link;
	pre->link = new2;
	
	node *new3 = getNode();
	node* pre = new1;
	pre->link = new3;
	return 0;
}

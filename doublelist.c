#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


struct node // node structure ------------->
{
	int data;
	struct node* prev;
	struct node* next;
	
};

struct node* head = NULL; //point at the first node
struct node* rear = NULL; //point at the last node

void rearcreation();//function making search about the last node
void DISPLAY_F();//function display list from the front i.e from first node to the last one
void DISPLAY_R();//function display list from the rear i.e from last node to the first one
void insertnode(int value);//function insert node to list

int main()
{
	/*insertnode(5);
	insertnode(10);
	insertnode(15);
	insertnode(20);
	insertnode(25);*/
	int value;
	char ch;
	while(1)
	{
		printf("enter new value\n");
		scanf("%d",&value);
		insertnode(value);
		printf("please enter E or e to exit\n");
		scanf(" %c",&ch);
		if(ch == 69 || ch == 101 ){break;}
		
	}
	system("cls");
	DISPLAY_F();
	printf("\n");
	rearcreation();
	DISPLAY_R();
	
	
	

	return 0;
}

void rearcreation()
{
	struct node *QTEMP =head;
	while(QTEMP->next != NULL)
	{
		QTEMP = QTEMP->next;
		
	}
	rear = QTEMP;
}

void DISPLAY_F()
{
	struct node *QTEMP =head;
	while(QTEMP != NULL)
	{
	
		printf("%d ",QTEMP->data);
		QTEMP = QTEMP->next;
		
	}
	
}

void DISPLAY_R()
{
	struct node *QTEMP =rear;
	while(QTEMP != NULL)
	{
		printf("%d ",QTEMP->data);
		QTEMP = QTEMP->prev;
		
	}
	
}

void insertnode(int value)
{
	struct node *TEMP = (struct node*)malloc(sizeof(struct node));
	TEMP->data = value;
	TEMP->next = NULL;
	TEMP->prev = NULL;
	struct node *QTEMP = head;
	
	struct node *PTEMP;
	if(head == NULL)
	{
		head = TEMP;
		
	}
	else
	{
		while(QTEMP->next != NULL)
		{
			
			QTEMP = QTEMP->next;
		}
		QTEMP->next = TEMP ;
		TEMP->prev = QTEMP;
	}
}

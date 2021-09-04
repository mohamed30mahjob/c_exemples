#include <stdio.h>
#include <stdlib.h>

struct node //---------------------------------->
{
	int data;
	struct node* next;
	
};
struct node* head = NULL;



void insertnode(int value);
void mirrorlist(void);
void display(void);



int main()
{
	// it is reallu long inialisation but it is working hahahahhaha-------------------->
	/*struct node* TEMP =(struct node*)malloc(sizeof(struct node));
	head = TEMP;
	TEMP->data = 10;
	TEMP->next = (struct node*)malloc(sizeof(struct node));
	TEMP = TEMP->next;
	TEMP->data = 30;
	TEMP->next = (struct node*)malloc(sizeof(struct node));
	TEMP = TEMP->next;
	TEMP->data = 70;
	TEMP->next = (struct node*)malloc(sizeof(struct node));
	TEMP = TEMP->next;
	TEMP->data = 700;
	TEMP->next = (struct node*)malloc(sizeof(struct node));
	TEMP = TEMP->next;
	TEMP->data = 800;
	TEMP->next = (struct node*)malloc(sizeof(struct node));
	TEMP = TEMP->next;
	TEMP->data = 988;
	TEMP->next = (struct node*)malloc(sizeof(struct node));
	TEMP = TEMP->next;
	TEMP->data = 7000;
	TEMP->next = NULL;*/
	
	// loop for inialisation && by using a function insertnode(int value); ----------------> 1
	
	
			//global variables for 1 && 2
			int i,n,value;
			printf("print the number of nodes i.e elements\n");
			scanf("%d",&n);
	
	/*
	i = 0;
	for(i=0;i<n;i++) //remember we are not using array so u can start from i=1 or any number you wanna
	{
		printf("print the %d element\n",i+1);
		scanf("%d",&value);
		insertnode(value);
		
	}
	*/
	
	
	
	//without using a function --------------------------------> 2
	
	i = 1;
	
	
		
	
	
		printf("print the %d element\n",i);
		scanf("%d",&value);
		struct node *TEMP = (struct node*)malloc(sizeof(struct node));
		TEMP->data = value;
		TEMP->next= NULL;
		head = TEMP;	
	
	
		struct node *QTEMP = head; 
		for(i=2;i<=n;i++)
		{
			struct node *TEMP = (struct node*)malloc(sizeof(struct node));
			
			printf("print the %d element\n",i);
			scanf("%d",&value);
			TEMP->data = value;
			TEMP->next= NULL;
			QTEMP->next = TEMP;
			QTEMP=QTEMP->next;
		}	
	
	
	
	
	display();
	mirrorlist();printf("\n");
	display();
	getch();
	
	return 0;
}
void insertnode(int value)   //--------------------------------->
{
	struct node *TEMP = (struct node*)malloc(sizeof(struct node));
	struct node *QTEMP ; 
	TEMP->data = value;
	TEMP->next= NULL;
	if(head == NULL)
	{
		head = TEMP;
	}
	else
	{
		QTEMP = head;
		while(QTEMP->next != NULL)
		{
			QTEMP = QTEMP->next;
		}
			QTEMP->next = TEMP;	
	}
	
	
}
void mirrorlist(void)  //----------------->
{
	
	struct node* QTEMP = head->next;
	head->next	= NULL;
	struct node* TEMP ;
	while(QTEMP != NULL)
	{
		TEMP = QTEMP->next;
		QTEMP->next = head;
		head = QTEMP;
		QTEMP = TEMP;	
	}
	
}
void display(void)  //------------------------>
{
	struct node* TEMP =head ;
	while(TEMP != NULL)
	{
		printf("%d ",TEMP->data);
		TEMP = TEMP->next;
		
	}
}



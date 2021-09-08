#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// struct def
struct node
{
	int data;
	struct node *next;
	struct node *prev;	
	
};
// ------------> rear && function rear
struct node* rear = NULL;
void rearsearch();

// -------------> head
struct node *head = NULL;
//---------------> functon insert
void insertdoublelist(int value);

//---------------> display function
void F_display();

//-----------------> function R_display
void R_display();

//----------------> function P_display
void P_display(int value,int type);

//------------------> function FR
void F_R_display(int type);

//-------------------> sort

void sortList(int S_type);



//---------------> main function
int main(int argc, char *argv[]) {
	system("color 2");
	int i,n,value;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	for(i=1;i <= n ; i++)
	{
		printf("enter the value of %d node\n",i);
		scanf("%d",&value);
		insertdoublelist(value);
	}
	system("cls");
//	sort();
	int S_type;
	printf("enter the type of sort\n");scanf("%d",&S_type);
	sortList(S_type);system("color 3");
	printf("1- FRONT DISPLAY \n2- REAR DISPLAY\n");
	int type;scanf("%d",&type);
	F_R_display(type);
	printf("\n");
	int Pvalue;
	printf("enter the number of element do you wanna print it\n");
	scanf("%d",&Pvalue);
	P_display(Pvalue,type);
	
	return 0;
}


//-------------->insert node
void insertdoublelist(int value)
{
	struct node* TEMP = (struct node*)malloc(sizeof(struct node));
	TEMP->data = value;
	TEMP->next = NULL;
	TEMP->prev = NULL;
	if(head == NULL)
	{
		head = TEMP;
	}
	else
	{
		struct node* QTEMP = head;
		while(QTEMP->next != NULL)
		{
			QTEMP = QTEMP->next;
		}
		TEMP->prev = QTEMP;
		QTEMP->next = TEMP; 
	}
	
}

//-----------------> function rear search
void rearsearch()
{
	struct node *QTEMP = head;
	while(QTEMP->next != NULL)
	{
		QTEMP = QTEMP->next;
	}
	rear = QTEMP;
	
}

//-----------------> function F_display
void F_display()
{
	struct node* QTEMP = head;
	while(QTEMP != NULL)
	{
		printf("%d ",QTEMP->data);
		QTEMP = QTEMP->next;
	}	
}

//-----------------> function R_display
void R_display()
{
	rearsearch();
	struct node* QTEMP = rear;
	while(QTEMP != NULL)
	{
		printf("%d ",QTEMP->data);
		QTEMP = QTEMP->prev;
	}	
}


//------------------> function FR
void F_R_display(int type)
{
	if(type == 1)
	{
	
		struct node* QTEMP = head;
		while(QTEMP != NULL)
		{
			printf("%d ",QTEMP->data);
			QTEMP = QTEMP->next;
		}
	}
	else
	{
	
		
			rearsearch();
			struct node* QTEMP = rear;
			while(QTEMP != NULL)
			{
				printf("%d ",QTEMP->data);
				QTEMP = QTEMP->prev;
			}
		
	}		
}


//----------------> function P_display
void P_display(int value,int type)
{
	int i;
	if(type == 1)
	{
		struct node *TEMP = head;
		for(i = 1;i<= value; i++)
		{
			printf("%d ",TEMP->data);
			TEMP = TEMP->next;
		}
	}
	else
	{
		rearsearch();
		struct node *TEMP = rear;
		for(i = 1;i<= value; i++)
		{
			printf("%d ",TEMP->data);
			TEMP = TEMP->prev;
		}
	}
		
}



//-----------> sort function
void sortList(int S_type) {  
    struct node *current = NULL, *index = NULL;  
    int temp;  
    //Check whether list is empty  
    if(head == NULL) {  
        return;  
    }  
    else 
	{  
    	
		
	
      	//Current will point to head  
        for(current = head; current->next != NULL; current = current->next)
		{  
        //Index will point to node next to current  
            for(index = current->next; index != NULL; index = index->next) 
			{  
				if(S_type == 1)
               	{	//If current's data is greater than index's data, swap the data of current and index  
                	if(current->data > index->data) 
					{  
                    	temp = current->data;  
                    	current->data = index->data;  
                    	index->data = temp;  
               		}
				}
				else
				{
					//If current's data is lower than index's data, swap the data of current and index  
                	if(current->data < index->data) 
					{  
                    		temp = current->data;  
                    		current->data = index->data;  
                    		index->data = temp;  
               		}	
				}
            }  
	    } 
		
    }  
}

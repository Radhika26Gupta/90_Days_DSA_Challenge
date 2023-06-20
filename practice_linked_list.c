#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node*next;
};
void insert_beg(struct node**start,int item)
{
	struct node*temp;
	temp = (struct node*)malloc(sizeof(struct node*));
	temp->info = item;
	if(*start==NULL)
		temp->next = NULL;
	else
		temp->next = *start;
	*start = temp;
}
void insert_end(struct node**start,int item)
{
	struct node*temp,*pos;
	temp = (struct node*)malloc(sizeof(struct node*));
	temp->info = item;
	temp->next = NULL;
	pos = *start;
	if(*start==NULL)
	{
		*start = temp;
	}
	else
	{
		while(pos->next!=NULL)
		{
			pos = pos->next;
		}
		pos->next = temp;
	}
}

void delete_beg(struct node**start)
{
	struct node*temp;
	temp = *start;
	if(*start==NULL)
		printf("list is empty\n");
	else
	{
		*start = temp->next;
		printf("\ndeleted successfully");
	}
	free(temp);	
}

void delete_end(struct node**start)
{
	struct node*temp,*loc;
	loc = *start;
	if(*start==NULL)
	{
		printf("\nLinked list is empty\n");
	}
	else if(loc->next==NULL)
	{
		loc = NULL;
		printf("deleted successfully\n");
	}
	else
	{
		while((loc->next)->next!=NULL)
		{
			loc = loc->next;
		}
		temp = loc->next;
		loc->next = NULL;
		printf("deleted successfully\n");
		free(temp);
	}
}
struct node* search(struct node*start,int item)
{
	struct node*temp;
	temp = start;
	if(start==NULL)
		printf("linked list is empty!!\n");
	else
	{
		while(temp->next!=NULL)
		{
			if(temp->info==item)
			{
				//printf("Element is present");
				return temp;
			}
			temp = temp->next;
		}	
	}
	//printf("Element is not present!");
	return NULL;
}

void insert_after(struct node**start,int before_value,int item)
{
	struct node*temp,*loc;
	loc = *start;
	loc = search(loc,before_value);
	
	temp = (struct node*)malloc(sizeof(struct node));
	temp->info = item;
	temp->next = NULL;
	if(*start==NULL)
	{
		printf("Linked list is empty\n");
	}
	else if((*start)->next==NULL)
	{
		insert_end(&(*start),item);
	}	
	else 
	{
	  temp->next=loc->next ;
	  loc->next = temp;	
	}
		
}
int count_no_of_elements(struct node*start)
{
	int c = 0;
	if(start==NULL)
	{
		printf("Linked list is empty");	
		return 0;
	}
	else 
	{
		while(start!=NULL)
		{
		start = start->next;
		c++;
		}
	}
	return c;
}

int search_value_at_index(struct node*start,int index)
{
	if(start==NULL)
	{
		printf("Linked list is empty");
	}
	else
	{
		
	}
}
void traverse(struct node*start)
{
	if(start==NULL)
	printf("Linked list is empty");	
	else 
	{
		printf("\nThe List is : \n");
		while(start!=NULL)
		{
		printf("%d ",start->info);
		start = start->next;
		}
	}	
}
int main()
{
	struct node*head = NULL;
	int item;
	int choice;
	char ch;
	void insert_beg(struct node**,int);
	void insert_end(struct node**,int);
	void traverse(struct node*);
	void delete_beg(struct node**);
	void delete_end(struct node**);
	int count_no_of_elements(struct node*);
	struct node* search(struct node*,int element);
	//int search_value_at_index(struct node*,int index);
	//void insert_after(struct node**,int,int);
	do
	{
		printf("\nEnter the choice:");
		printf("\n1.Insert at beginning");
		printf("\n2.Traverse\n");
		printf("3.Insert at end\n");
		printf("4.Delete at beginning\n");
		printf("5.Delete at end\n");
		printf("6.Element is present or not?\n");
		printf("7.Count the number of elements\n");
		//printf("8.Enter the index for which value is to be printed\n");
		printf("9.Insert After\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				printf("Enter the value : ");
				scanf("%d",&item);
				insert_beg(&head,item);
				printf("inserted successfully\n");
				break;
			}
			case 2:
			{
				traverse(head);
				break;
			}
			case 3:
			{
				printf("Enter the value : ");
				scanf("%d",&item);
				insert_end(&head,item);
				printf("inserted successfully\n");	
				break;
			}	
			case 4:
			{
				delete_beg(&head);
				break;
			}
			case 5:
			{
				delete_end(&head);
				break;
			}
			case 6:
			{
				int element;
				printf("Enter the element to be searched : ");
				scanf("%d",&element);
				search(head,element);
				break;
			}
			case 7:
			{
				int count = 0;
				count = count_no_of_elements(head);
				printf("The number of elements is : %d",count);	
				break;
			}
			/*case 8:
			{
				int index;
				printf("Enter the index : \n");
				scanf("%d",&index);
				int value = search_value_at_index(head,index);
				printf("\nThe value at index %d is %d",index,value);
				break;
			}*/
			case 9:
				{
					int before_value;
					printf("Enter the value after which you want to insert : ");
					scanf("%d",&before_value);
					printf("Enter the value : ");
					scanf("%d",&item);
					insert_after(&head,before_value,item);
					printf("inserted successfully\n");
					break;
				}
			default:
			{
			printf("Wrong choice!!");
			break;
			}
		}
		fflush(stdin);
		printf("\nDo you want to continue press y for yes or n for no : \n");
		scanf("%c",&ch);
	}while(ch=='Y'||ch=='y');	
}

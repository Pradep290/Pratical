  #include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
struct node *firstnode()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=10;
	newnode->next=NULL;
	
	return newnode;
}
void createlist(int n)
{
	int i;
	struct node *newnode;
	struct node *temp;
	for(i=0;i<n;i++)
	{
		if(start==NULL)
		{
			start=newnode;
	}
		else
		while(temp->next!=NULL)
		temp=temp->next;
		temp=newnode;
	}
	
}

void displaylist()
{
    struct node *temp;
    temp = start;
    if(start == NULL)
        {
        printf("Linked list is empty");
        }
    else
        {
        while(temp != NULL)   
        {
            printf("%d\t",temp->data);
            temp = temp -> next;    
        }
    }
}

int main()
{
     struct node *start;
     int n;
     printf("enter the number of nodes : ");
     scanf("%d",&n);
     createlist(n); 
     displaylist();
     return 0;
}

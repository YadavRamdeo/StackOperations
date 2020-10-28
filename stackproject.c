#include<stdio.h>
#include<stdlib.h>
#define N 5
void stackusingarray();
	void push();
	void display();
	void pop();
	void peek();
void stackusinglinklist();
	void pushll();
	void displayll();
	void popll();
	void peekll();
void stackusigprefix();

struct node
	{
		int data;
		struct node *next;
	};
	struct node *newnode,*temp,*topp=0;

int x,i,n,item,choice,stack[N],top=-1;
int main() // main function begin code will start executing from here
{	
	while (1)
	{
		//system("color A");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" *************************    S T A C K  OPERATION BY  **************************\n");
		printf("                             R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("   1.STACK USING ARRAY\n");
		printf("   2.STACK USING LINK LIST\n");
		printf("   3.STACK USING PREFIX AND POSTFIX\n");
		printf("   0.EXIT\n");
		printf("ENTER YOUR CHOICE:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				stackusingarray();
				break;
			case 2:
				stackusinglinklist();
				break;
			case 3:
				stackusigprefix();
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("PRESS 0 TO EXIT");
				break;
		}		
	}
	return 0;
}
void stackusingarray()
{
	while (1)
	{
		//system("color A");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" ************************  STACK OPERATION USING ARRAY BY  **************************\n");
		printf("                             R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("   1.PUSH\n");
		printf("   2.DISPLAY\n");
		printf("   3.POP\n");
		printf("   4.PEEK\n");
		printf("   0.EXIT\n");
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				display();
				break;
			case 3:
				pop();
				break;
			case 4:
				peek();
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("PRESS 0 TO EXIT");
				break;
		}		
	}
}
void push()
{
	printf("HOW MANY DATA YOU WANT TO ENTER: ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		if(top==N-1)
		{
			printf("STACK OVERFLOW");	
		}	
		else
		{
			printf("ENTER DATA:\n");
			scanf("%d",&x);
			top++;
			stack[top]=x;
		}
	}
}
void display()
{
	if(top==-1)
	{
		printf("STACK EMPTY");
	}
	else
	{
		printf("THE ENTERED DATA ARE:\n");
		for(i=top; i>=0; i--)
		{
			printf("%d ",stack[i]);
		}
	}
}
void pop()
{
	if(top==-1)
	{
		printf("STACK UNDERFLOW");
	}
	else
	{
		item=stack[top];
		top--;
		printf("%d",item);
	}
}
void peek() // to check the top most element in the stack
{
	if(top==-1)
	{
		printf("STACK EMPTY");	
	}	
	else
	{
		printf("%d",stack[top]);
	}
}
void stackusinglinklist()
{
	while (1)
	{
		//system("color A");
		printf("\n----------------------------------------------------------------------------------\n\n");
		printf(" **********************   STACK OPERATION USING LINK LIST BY  **************************\n");
		printf("                             R    A    M    D    E   O                            \n");
		printf("----------------------------------------------------------------------------------\n");
		printf("   1.PUSH\n");
		printf("   2.DISPLAY\n");
		printf("   3.POP\n");
		printf("   4.PEEK\n");
		printf("   0.EXIT\n");
		printf("ENTER YOUR CHOICE: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				pushll();
				break;
			case 2:
				displayll();
				break;
			case 3:
				popll();
				break;
			case 4:
				peekll();
				break;
			case 0:
				exit(1);
				break;
			default:
				printf("PRESS 0 TO EXIT");
				break;
		}		
	}
}
void pushll(int x)
{
	printf("HOW MANY DATA YOU WANT TO ENTER: ");
	scanf("%d",&n);
	newnode=(struct node*)malloc(sizeof(struct node));
	for(i=0; i<n; i++)
	{
		printf("ENTER DATA:\n");
		scanf("%d",&x);
		newnode->data=x;
		newnode->next=topp;
		topp=newnode;
	}	
}
void displayll()
{
	temp=topp;
	if(topp==0)
	{
		printf("LIST EMPTY");
	}
	else
	{
		printf("THE ENTERED DATA ARE:\n");
		
		while(temp!=0)
		{
			
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}
void popll()
{
	temp=topp;
	if(topp==0)
	{
		printf("LIST EMPTY");
	}
	else
	{
		printf("DATA DELETED:\n");
		printf("%d ",temp->data);
		temp=temp->next;
		free(topp);
	}
}
void peekll()
{
	if(topp==0)
	{
		printf("LIST EMPTY");
	}
	else
	{
		printf("THE PEEKED ELEMENT IS %d",topp->data);
	}
}
void stackusigprefix()
{
	
}

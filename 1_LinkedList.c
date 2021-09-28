//Linked List : Insertion of a node at beginning 

// C programming 

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next; 
};

struct Node * head ; // Global node pointer variable

//InsertToLL Function 

void InsertToLL(int x)
{
    struct Node* temp  = (struct Node*) malloc (sizeof(struct Node ));
    temp->data=x;
    temp->next=head;
    head=temp;
}


// print function 5

void print()
{
    struct Node* temp =head;
    printf("List is : ");
   
while(temp!=NULL)
    {
        printf("%d ",temp->data);
        
        temp=temp->next;
    }
   

    printf("\n");
}



int main()
{
    head =NULL; // empty list , pointer doesn't points to any list 

    printf("How many numbers ?\n ");
    int n ,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number \n");
        scanf("%d",&x);
        InsertToLL(x);
        print();
    }
}

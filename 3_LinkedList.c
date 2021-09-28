// head is here local variable in main() , type 2 - address of head is passed 

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;

};
void print( struct Node * head )
{
    printf("List is \n ");
    struct Node * temp = head ;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp= temp->next;     
    }
    printf("\n");
}
void Insert(int x, struct Node** pointerToHead )
{
    struct Node* temp = (struct Node * ) malloc (sizeof(struct Node));
    temp->data=x;
    temp->next=*pointerToHead;
    *pointerToHead=temp;
    
}


int main()
{
    struct Node* head= NULL; // local variable in main()
    printf("How Many numbers to insert :");
    int n,x,i;
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        printf("Enter the number : ");
        scanf("%d",&x);
        Insert(x,&head);
        print(head);
        
    }
}
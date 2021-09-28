// head is here local variable in main() , type 1 - value of head is passed 

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;

};
struct Node * Insert(int x, struct Node * first )
{
    struct Node* temp = (struct Node * ) malloc (sizeof(struct Node));
    temp->data=x;
    temp->next=first;
    first=temp;
    return first;


}
void print(struct Node * first)
{
    printf("List is \n ");
    struct Node * temp = first;
    while(temp!=NULL)
    {
        printf("%d", temp->data);
        temp= temp->next;     
    }
    printf("\n");
}

int main()
{
    struct Node* head= NULL; // local variable in main()
    printf("How Many numbers to insert :");
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the number : ");
        scanf("%d ",&x);
        head = Insert(x,head);
        print(head);
    }
}
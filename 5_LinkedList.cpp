// merge the sorted linked list  using recursion 
#include<iostream>
using namespace std;




class Node
{
    public:
    int data;
    Node* next;
};

void Insert(Node** headPointer,int x)
{
    Node* newnode =new Node();
    newnode->data=x;
    newnode->next=NULL;
    if(*headPointer==NULL)
   {
       *headPointer=newnode;
       return;
   } 

    Node* temp =*headPointer;
    while(temp->next!=NULL)
      {
          temp= temp->next;
      }  
    temp->next=newnode;
}

Node* mergeListRecursion(Node* head1,Node* head2)
{

    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    if(head1->data<=head2->data)
        {
            head1->next=mergeListRecursion(head1->next,head2);
            return head1;        
        }
    
    else
    {
        head2->next=mergeListRecursion(head1,head2->next);
        return head2; 

    }    
        


}



int main()
{
    Node* head1 =NULL;
    Node* head2=NULL;

    Insert(&head1,1);
    Insert(&head1,2);
    Insert(&head1,5);
    Insert(&head1,10);

    Insert(&head2,2);
    Insert(&head2,4);
    Insert(&head2,6);
    Insert(&head2,9);
    Node* temp=head1;
    cout<<"\n1st list : "<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    temp=head2;
    cout<<"\n2nd list : "<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    temp =mergeListRecursion(head1,head2);
    cout<<"\nFinal list list : "<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}
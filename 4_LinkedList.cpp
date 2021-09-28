// cpp program to implement merge of two linked list
//passing the value of heads of two linked list 
#include<iostream>
using namespace std;


class Node 
{public:
    int data;
    Node* next;
};


Node* insert(Node* head , int x )
{
    Node * newnode = new Node();
    newnode->data=x;
    newnode->next=head;
    head=newnode;
    return head;
}
void swap(Node** head1Pointer,Node** head2Pointer)
{
    Node* temp = *head1Pointer;
    *head1Pointer=*head2Pointer;
    *head2Pointer=temp;
}

Node* mergeLinkedList(Node* head1,Node* head2)
{
    if(head1==NULL)
    return head2;
    if(head2==NULL)
    return head1;
    
    if(head1->data > head2->data)
    {
        swap(&head1,&head2);
        
    }
    Node* StartPointer = head1;
    Node* temp =NULL;
    while(head1!=NULL && head2!=NULL)
    {
        temp=NULL;
        while(head1!=NULL && head1->data<=head2->data)
        {
            temp=head1;
            head1=head1->next;
        }
        temp->next=head2;
        swap(&head1,&head2);
    }
    return StartPointer;

}




int main()
{
    Node* head1= NULL;//empty list  , head1 is local (pointer to node ) variable in main()...for 1 st list 
    Node* head2= NULL;//empty list  , head2 is local (pointer to node ) variable in main()...for 2 nd list 
// list1 elements
        head1 = insert(head1,9);
        head1 = insert(head1,7);
        head1 = insert(head1,5);


// list2 elements        
    
        head2 = insert(head2,10);
        head2 = insert(head2,8);
        head2 = insert(head2,4);
        head2 = insert(head2,3);
    


// printing the 1 st list 
 cout<<"1st list: "<<endl;
Node * temp= head1;
while(temp!= NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}


// printing the 2 nd list 
 cout<<"\n2nd  list: "<<endl;
temp= head2;

while(temp!= NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}

temp = mergeLinkedList(head1,head2);


// print final list 
cout<<"\nFinal result : \n";
while(temp!= NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}

}
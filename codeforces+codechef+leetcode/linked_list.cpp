#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data ;
    node* next ;

    node(int val)
    {
        data = val ;
        next = NULL;    
    }
};

void InsertNode(node* &head , int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head = n ; 
        return ;
    }
    
    
    node* temp = head ;
    
    while(temp->next != NULL)
    {
        temp = temp->next;
        
    }
    
    temp->next = n ;
    
}
node* reverserecursive(node* & head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;

    }

    node* newhead=reverserecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;

}

void PrintNode(node* head)
{
    node* temp = head;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp= temp->next; 
    }
    cout<<"NULL"<<endl;
}

int main()
{
   
   
    
    node* head = NULL;
    InsertNode(head , 1);
    
    InsertNode(head , 2);
    
    InsertNode(head , 3);
    PrintNode(head);
    node* newhead=reverserecursive(head);
    
    PrintNode(newhead);
    return 0 ;
}
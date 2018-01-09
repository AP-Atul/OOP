#include <iostream>
using namespace std;

struct node    //Structure for Node i: user information (seat)
{
 node *next;
 int data;
};
int main()
{
   node *head=new node;
   node *n=new node;
   head->next=n;
   n->next=head;
head->data=100;
n->data=200;//links as a circular linked list
   while(head->next!=NULL)
   {
       cout<<head->data;
       head=head->next;
   }

    return 0;
}

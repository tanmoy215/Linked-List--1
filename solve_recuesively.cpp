#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int data;
     Node* next;
     Node(int data){
        this->data = data;
        this->next = NULL;  //same
     }
};
void display(Node* head){
    if(head==NULL) return;
    cout<<head->data<<" ";
    display(head->next);
}
void reverse(Node* head){
    if(head==NULL) return;
    reverse(head->next);
    cout<<head->data<<" ";
}
int main(){
    Node* a = new Node(10);
  Node* b = new Node(20);
  Node* c = new Node(30);  
  Node* d = new Node(40);
  Node* e = new Node(50);
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  display(a);
  cout<<endl;
  reverse(a);
    return 0;
}
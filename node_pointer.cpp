#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
  int data;
  Node* next;
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
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
//    Node* temp = a;
//    while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp = temp->next;
//    }
 display(a);
 cout<<"Size is : "<<size(a);
    return 0;
}
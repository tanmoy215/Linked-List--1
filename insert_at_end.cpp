#include<bits/stdc++.h>
using namespace std;
class Node{  //user define Data type
    public:
  int data;
  Node* next;
  Node(int data){
     this->data = data;
     this->next = NULL;
  }
};
class LinkedList{  //user define data structure
   public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void InsertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display(){
        Node* temp = head;
        while(temp!=0){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};


void insertatend(Node* head,int val){
    Node* t = new Node(val);
    while(head->next!=NULL){
        head = head->next;
    }
    head->next = t;
    t->data = val;
}

 void displayy(Node* head){
    if(head==NULL) return;
    cout<<head->data<<" ";
    displayy(head->next);
 }
int main(){
     cout<<"Bulid In Linked List"<<endl;
    //Manual Linked List where we can't access tail address
    //time Complexity O(n);
     Node* a = new Node(10);
     Node* b = new Node(20);
     Node* c = new Node(30);   //front - head
     Node* d = new Node(40);    //Back  - tail
     Node* e = new Node(50);
     a->next = b;
     b->next = c;
     c->next = d;
     d->next = e;
     insertatend(a,100);
    displayy(a);

 cout<<endl<<"Manual LINKED LIST"<<endl;
  
  //Linked List where we access head and tail also
  //Time Complexity O(1)
     LinkedList ll;
     ll.InsertAtEnd(10);
     ll.display();
     cout<<ll.size<<endl;
     ll.InsertAtEnd(30);
     ll.display();
     cout<<ll.size<<endl;
     ll.InsertAtEnd(40);
     ll.display();
     cout<<ll.size<<endl;
     ll.InsertAtEnd(60);
     ll.display();
     cout<<ll.size<<endl;
    return 0;
}
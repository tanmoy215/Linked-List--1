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
    int getElement(int idx){
        Node* temp = head;
        if(idx<0 || idx>size) {
            cout<<"Invalid Index";
            return -1;
        }
       else if(idx == 0) return head->data;
        else if(idx==size-1) return tail->data;
        else{
            for(int i=1;i<=idx;i++){
                temp= temp->next;
        }
        }
        return temp->data;
    }
   void DeleteAtTail(){
    if(size==0){
        cout<<"List is Empty"<<endl;
        return;
    }
    Node* temp = head;
    //  for(int i=1;i<size-1;i++){
    //     temp = temp->next;
    //  }
    while(temp->next!=tail){
        temp = temp->next;
    }
     temp->next = NULL;
     tail = temp;
     size--;       
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
int main(){
     LinkedList ll;
     ll.InsertAtEnd(10);
     //ll.display();
     //cout<<ll.size<<endl;
     ll.InsertAtEnd(30);
     //ll.display();
     //cout<<ll.size<<endl;
     ll.InsertAtEnd(40);
     ll.display();
    // cout<<ll.size<<endl;
     ll.InsertAtEnd(60);
     ll.display();
    ll.DeleteAtTail();
     ll.display();
    ll.DeleteAtTail();
    ll.display();
    return 0;
}
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
   void DeleteAtHead(){
     if(size==0) cout<<"Empty Linked List"<<endl;
     else{
        head = head->next;
        size--;
     }
     return;
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
     //cout<<ll.size<<endl;
     ll.DeleteAtHead();
     ll.display();
     cout<<ll.size<<endl;
    return 0;
}
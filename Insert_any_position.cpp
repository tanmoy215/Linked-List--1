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
    void InsertAtHead(int val){
        Node* tem = new Node(val);
        if(size==0){
            head = tail = tem;
        }
        else{
            tem->next = head;
            head = tem; 
        }
        size++;
    }
    void InsertAtAnyPosition(int idx, int val){
        if(idx<0 || idx>size) cout<<"Index Out of Bound"<<endl;
        else if(idx==0) InsertAtHead(val);
        else if(idx == size) InsertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next =temp->next;
            temp->next = t;
            size++;
        }
        
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
    // ll.display();
    // cout<<ll.size<<endl;
    // ll.InsertAtEnd(30);
     //ll.display();
    // cout<<ll.size<<endl;
     ll.InsertAtEnd(40);
     //ll.display();
    // cout<<ll.size<<endl;
     ll.InsertAtEnd(60);
     ll.display();
     //cout<<ll.size<<endl;
     ll.InsertAtHead(40);
     ll.display();
    // cout<<ll.size<<endl;
      ll.InsertAtAnyPosition(2,89);
     ll.display();
    return 0;
}
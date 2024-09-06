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
int main(){
    Node a(10),b(20),c(30),d(40);
     a.next = &b;
     b.next = &c;
     c.next = &d;
     cout<<(a.next)->data<<endl;  //print b data without using b
     cout<<(b.next)->data<<endl;   //print c data without using c
     cout<<(((a.next)->next)->next)->data<<endl;   //using a access the d data
     Node temp = a;
     while(1){
        cout<<temp.data<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
        
     }
    return 0;
}
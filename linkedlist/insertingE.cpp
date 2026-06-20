#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;

    }
};

int main(){
    
    Node *Head, *Tail;
    Tail = Head = NULL;
    cout<<Head->data<<endl;
    cout<<Head->next<<endl;

        int arr[]= {2,4,6,8,10};
          //insert at beginning


          //linked list doesn't exists
          for(int i=0;i<5;i++){

          if(Head==NULL){
            Head = new Node(arr[i]);
            Tail=Head;
          }
        //linked list exist
         else{
          Tail->next = new Node(arr[i]);
          Tail=Tail->next;
         }
        }

        Node *temp ;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }

    return 0;
}
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

Node* CreateLinkedList(int arr[], int index, int size){
    if (index == size)
        return nullptr;

    Node* temp = new Node(arr[index]);
    temp->next = CreateLinkedList(arr, index + 1, size);
    return temp;
}

int main() {
    Node *Head = nullptr;
    int arr[] = {2, 4, 6, 1, 7};

    Head = CreateLinkedList(arr, 0, 5);

    // Print linked list
    Node* temp = Head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Free memory
    while(Head){
        Node* temp = Head;
        Head = Head->next;
        delete temp;
    }

    return 0;
}
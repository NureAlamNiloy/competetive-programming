//Doubly LinkedList and there Oparetion

#include <bits/stdc++.h>
using namespace std;

class node{
public: 
    int data;
    node* next;
    node* prv;
};
class dublyLinkedList{
public: 
    node* head;
    int size;

    dublyLinkedList(){ //constructor 
        head = NULL;
        size = 0;
    }

    node* createNewNode(int value){ // Create newNode and retun the node
        node* newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prv = NULL;
        return newNode;
    }

    // insert a value at head .... time complexity O(1)
    void insertAtHead(int data){
        size++;
        node* newNode = createNewNode(data);
        if (head==NULL){
            head = newNode;
            return;
        }
        node* ptr = head;
        newNode->next = ptr;
        ptr->prv = newNode;
        head =newNode;
    }

    //INsert At Any Index of dubly Linked List
    void insertAtAnyIndex(int data , int index){

        if (index==0){
            insertAtHead(data);
        }
        size++;
        
        node* a = head;
        int curIdx = 0;
        while (curIdx!= index-1){
            curIdx++;
            a = a->next;
        }
        node* newNode = createNewNode(data); 
        newNode->next = a->next;
        newNode->prv = a;
       node* b = a->next;
       b->prv = newNode;
       a->next = newNode;
        
    }

    // Traversing LinkedList
    void traversing(){
        node* ptr = head;
        while (ptr!=NULL){
            cout << ptr->data << " " ;
            ptr = ptr->next;
        }
        cout << "\n";
    }

    // Size of linkedList
    int getSize(){
        return size;
    }

    // Delete Node At any index
    void deleteNode(int index){
        if (index<0 || index > size-1) return;
       
        node* a = head;
        // if(index==0){
        //     node* f = a->next;
        //     f->prv = NULL;
        //     head = f;
        //     return;
        // }
        int curIdx = 0;
        while (curIdx!= index){
            curIdx++;
            a = a->next;
           
        }
        node* b = a->prv;
        node* c = a->next;
        if(c!=NULL) c->prv = b;
        if(b!=NULL) b->next = c;
        delete a;
        if(index==0){
            head = c;
        }
        size--;
    }
    



};

int main(){

    dublyLinkedList dl;
    dl.insertAtHead(1);
    dl.insertAtHead(2);
    dl.insertAtHead(3);
    dl.insertAtHead(4);
    dl.traversing();
    dl.insertAtAnyIndex(50000000, 2);
    dl.traversing();
    dl.insertAtAnyIndex(56456, 4);
    dl.traversing();
    dl.deleteNode(0);
    dl.traversing();
    cout << dl.getSize();


    return 0;
}
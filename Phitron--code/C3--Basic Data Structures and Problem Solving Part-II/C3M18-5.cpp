// Linked list code

#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* nxt;
};

class linkedList{
public:
    node* head = NULL;
    int size=0;

    //create a new node
    node* creatNewNode(int value){
        node *newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

    // Insert new value on list head
    void insertAthead(int value){
        size++;
        node *a = creatNewNode(value);
        if (head==NULL){
            head = a;
            return;
        }
        a->nxt = head;
        head = a;
    }

    //Inser a value at any index
    void insertAtAnyIndex(int index , int value){
        if (index<0 || index > size){
            return;
        }
        if (index==0){
            insertAthead(value);
            return;
        }
        size++;
        node *ptr = head;
        int currentIndex=0;
        while (currentIndex!=index-1){
            ptr = ptr->nxt;
            currentIndex++;
        }
        node *newNode = creatNewNode(value);
        newNode->nxt = ptr->nxt;
        ptr->nxt=newNode;
    }

    //Traverse and print the linked list
    void traverse(){
        node *ptr = head;
        while (ptr!=NULL){
            cout << ptr->data << " ";
            ptr = ptr->nxt;
        }
       cout << endl; 
    }
    
    
    // Search for singh or kth value
    int search_KthValue(int value){
        node *a = head;
        int index = 0;
        while (a!=NULL){
           if (a->data==value){
                return index;
           }
            a = a->nxt;
            index++;
        }
       cout << endl; 
       return -1;
    }

    //Delete a valu from head
    void deleteAtHead(){
        if (head==NULL){
            cout << "No velue for delete";
            return;
        }
        size--;
        node *a = head;
        head = a->nxt;
        delete a;
    }

    //Delete from any index
    void deleteAtAnyIndex(int index){
        if (index<0 || index > size-1){
            return;
        }
        if (head==NULL){
            cout << "No velue for delete";
            return;
        }
        
        
        size--;
        node *a = head;
        int curIdx = 0;
        while (curIdx!= index-1){
            a=a->nxt;
            curIdx++;
        }
        node *del = a->nxt;
        a->nxt = del->nxt;
        delete del;
    }

    //Size of linked list
    int getSize(){
        return size;
    }


    // Nth Index Value 
    int getIndexValue( int index){
        if (index<0 || index > size-1){
            return -1;
        }
        node* a = head;
        int currentIndex = 0;
        while (index != currentIndex){
            currentIndex++;
            a = a->nxt;
        }
        return a->data;
        
    }

    // Delete Zero



};


int main(){

    linkedList list;
    list.insertAthead(7);
    list.insertAthead(0);
    list.insertAthead(0);
    list.insertAthead(3);
    list.insertAthead(6);
    list.insertAthead(7);
    
    list.traverse();
    
    list.traverse();
    
    cout << list.getIndexValue(4) << "\n";
    cout << list.getSize() << "\n";

    
    return 0;
}
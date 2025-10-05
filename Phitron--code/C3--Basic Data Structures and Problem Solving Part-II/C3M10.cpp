/*




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
    node* head;
    linkedList(){
        head = NULL;
    }

    //create a new node
    node* creatNewNode(int value){
        node *newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

    // Insert new value on list head
    void insertAthead(int value){
        node *a = creatNewNode(value);
        if (head==NULL){
           head = a;
            return; 
        }
        a->nxt = head;
        head = a;
        
        
    }

    //Traverse and print the linked list
    void traverse(){
        node *a = head;
        while (a!=NULL){
            cout << a->data << " ";
            a = a->nxt;
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


    //Searce for All possible occarence 
    void searchAllvalue(int value){
        node *a = head;
        int index = 0;
        while (a!=NULL){
           if (a->data==value){
                cout <<value << " is founded at " << index <<"\n";
           }
            a = a->nxt;
             index++;
        }
       cout << endl; 
    }



};


int main(){

    linkedList list;

    list.insertAthead(10);
    list.insertAthead(30);
    list.insertAthead(20);
    list.insertAthead(40);
    list.insertAthead(30);

    list.traverse();

    cout << "Is found " << list.search_KthValue(10) << endl;
    cout << "Is found " << list.search_KthValue(5) << endl;
    cout << "Is found " << list.search_KthValue(30) << endl;

    list.searchAllvalue(30);
    
    return 0;
}







//Extra
#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* nxt;
};

class linkedList{
public:
    node* head;
    int size=0;
    linkedList(){
        head = NULL;
    }

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
    

    //Traverse and print the linked list
    void traverse(){
        node *a = head;
        while (a!=NULL){
            cout << a->data << " ";
            a = a->nxt;
        }
       cout << endl; 
    }
    
    int getSize(){
        return size;
    }
    int getValue(int index){
        if (index>=getSize()) return -1;
        node *a = head;
        for(int i=0; i<index;i++){
            a = a->nxt;
        }
        return a->data;
    }
    void printReverse(node* pr) {
        
        if (pr == NULL) {
            return;
        }
        printReverse(pr->nxt);
        cout << pr->data << " ";
    }

    void printReverse() {
        printReverse(head);
        cout << endl;
    }
    void swapFirst(){
        if (size < 2) {
            return;
        }
        node* temp = head->nxt;
        head->nxt = temp->nxt;
        temp->nxt = head;
        head = temp;
    }

};


int main(){

    linkedList l;
    cout<<l.getSize()<<"\n";
    l.insertAthead(5);
    cout<<l.getSize()<<"\n";
    l.insertAthead(6);
    l.insertAthead(30);
    cout<<l.getSize()<<"\n";
    l.insertAthead(20);
    l.insertAthead(30);

    cout<<l.getValue(2)<<"\n";
    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.traverse();
    l.swapFirst();
    l.traverse();
    l.printReverse();

    
    return 0;
}










*/
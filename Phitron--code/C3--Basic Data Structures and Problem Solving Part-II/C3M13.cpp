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


    // Insert after a valur
    void insertAfterValue(int value, int data){
        size++;
        node* a=head;
        while (a!=NULL){
            if(a->data == value){
                break;
            }
            a = a->nxt;
        }
        node* newNode = creatNewNode(data);
        newNode->nxt = a->nxt;
        a->nxt = newNode;
        
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

    //Size of linked list
    int getSize(){
        return size;
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

    //Print linked list in reverce order
    void printRiverce(node* a){
        if(a==NULL) return;
        printRiverce(a->nxt);
        cout << a->data << " ";
    }
    void revercePrintCall(){
        printRiverce(head);
        cout << endl;
    }



};


int main(){

    linkedList list;
    
    list.insertAthead(10);
    list.insertAthead(70);
    list.insertAthead(20);
    list.insertAthead(40);
    list.insertAthead(30);
    list.traverse();
    list.insertAfterValue(20, 1000);
    list.traverse();
    list.revercePrintCall();
    cout << list.getSize() << "\n";

    
    

    // cout << "Is found " << list.search_KthValue(10) << endl;
    // cout << "Is found " << list.search_KthValue(5) << endl;
    // cout << "Is found " << list.search_KthValue(30) << endl;

    // list.searchAllvalue(30);
    
    return 0;
}
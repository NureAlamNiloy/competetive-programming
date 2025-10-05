#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
};

class linkedList{
public:
    node* head;
    int size = 0;
    linkedList(){
        head = NULL;
    }

    //Create New Node
    node* creatNewNode(int value){
        node* newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    int getSize(){
        return size;
    }

    //Insert at head
    void insertAtHead(int value){
        size++;
        node* a = creatNewNode(value);
        if (head==NULL){
            head =a;
            return;
        }
        a->next = head;
        head = a;
    }

    // Traverce All list
    void traverce(){
        node* a= head;
        while(a!=NULL){
            cout << a->data << " ";
            a =a->next;
        }
        cout << endl;
    }

    // Delete 1st element of list
    void deleteAtHead(){
        if(head==NULL) return;
        size--;
        node* a = head;
        head = a->next;
        delete a;
    }

    // Delete last element of list
    void deleteAtlast(){
        if(head==NULL) return;
        
        node* a = head;
        int curIdx = 0;
        int last = size-2;
        while (curIdx != last){
            a = a->next;
            curIdx++;
        }
        node* b =a->next;
         a->next = NULL;
        delete b;
        size--;
    }

    // Search i-th Index
    void searchIthvalue(int i){
        node* a = head;
        int currentIndex = 0;
        while (a !=NULL){
            currentIndex++;
            if (currentIndex == i){
                cout << a->data << endl;
            }
            a = a->next;
        }
        
    }


};


int main(){
    
    linkedList l;
    l.insertAtHead(5);
    l.insertAtHead(4);
    l.insertAtHead(3);
    l.insertAtHead(2);
    l.insertAtHead(1);
    l.traverce();
    l.insertAtHead(0);
    l.traverce();
    l.deleteAtHead();
    l.traverce();
    l.deleteAtlast();
    l.traverce();
    l.searchIthvalue(3);

    return 0;
}

/*



//Problem--1
#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
};

class linkedList{
public:
    node* head;
    linkedList(){
        head = NULL;
    }

    //Create New Node
    node* creatNewNode(int value){
        node* newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    //Insert at head
    void insertAtHead(int value){
        node* a = creatNewNode(value);
        if (head==NULL){
            head =a;
            return;
        }
        a->next = head;
        head = a;
    }

    // Traverce All list
    void traverce(){
        node* a= head;
        while(a!=NULL){
            cout << a->data << " ";
            a =a->next;
        }
        cout << endl;
    }


};


int main(){
    
    linkedList l;
    l.insertAtHead(5);
    l.insertAtHead(4);
    l.insertAtHead(3);
    l.insertAtHead(2);
    l.insertAtHead(1);
    l.traverce();
    l.insertAtHead(0);
    l.traverce();

    return 0;
}



//p2-----
// Delete 1st element of list
    void deleteAtHead(){
        if(head==NULL) return;
        node* a = head;
        head = a->next;
        delete a;
    }

//p3------

    // Delete last element of list
    void deleteAtlast(){
        if(head==NULL) return;
        
        node* a = head;
        int curIdx = 0;
        int last = size-2;
        while (curIdx != last){
            a = a->next;
            curIdx++;
        }
        node* b =a->next;
         a->next = NULL;
        delete b;
        size--;
    }    



//p4-------
 // Search i-th Index
    void searchIthvalue(int i){
        node* a = head;
        int currentIndex = 0;
        while (a !=NULL){
            currentIndex++;
            if (currentIndex == i){
                cout << a->data << endl;
            }
            a = a->next;
        }
        
    }







*/
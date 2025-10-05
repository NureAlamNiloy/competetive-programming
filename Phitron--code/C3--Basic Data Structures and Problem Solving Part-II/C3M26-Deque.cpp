// BuildIn Deque using STL
#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(5);
    d.push_back(10);
    d.push_front(20);
    d.pop_back();
    d.pop_front();

    cout << "Size is = " << d.size() << endl;
    cout << "Front is = " << d.front() << endl;
    cout << "Back is = " << d.back() << endl;

    return 0;
}







/*





// BuildIn Deque using STL
#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(5);
    d.push_back(10);
    d.push_front(20);
    d.pop_back();
    d.pop_front();

    cout << "Size is = " << d.size() << endl;
    cout << "Front is = " << d.front() << endl;
    cout << "Back is = " << d.back() << endl;

    return 0;
}




===================================================================================================================



// Deque Revercen Oparetion
#include <bits/stdc++.h>
using namespace std;

class node{
public: 
    int data;
    node* next;
    node* prv;
};
class Deque{
public: 
    node* head;
    node* tail;
    int size;
    int rev;

    Deque(){ //constructor 
        head = NULL;
        tail =NULL;
        size = 0;
        rev =0;
    }

    node* createNewNode(int value){ // Create newNode and retun the node
        node* newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prv = NULL;
        return newNode;
    }

    //Push back Deqe O(1)
    void InserAtTail(int value){
        node* newNode = createNewNode(value);
        if(size == 0){
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        tail->next = newNode;
        newNode->prv = tail;
        tail = newNode;
        size++;
    }

    // Push front
    void InserAtHead(int value){
        node* newNode = createNewNode(value);
        if(size == 0){
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        head->prv = newNode;
        newNode->next = head;
        head = newNode;
        size++;
    }

    //Pop Back O(1)
    void DeleteAtTail(){
        if(size == 0){
            cout << "The Deque is Empty\n";
            return;
        }
        if(size == 1){
            delete tail;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        node* a = tail;
        tail = tail->prv;
        delete a;
        tail->next = NULL;
        size--;
    }
    
    //Pop Front O(1)
    void DeleteAtHead(){
        if(size == 0){
            cout << "The Deque is Empty\n";
            return;
        }
        if(size == 1){
            delete head;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        node* a = head;
        head = head->next;
        delete a;
        head->prv = NULL;
        size--;
    }

    int getSize(){
        return size;
    }

    // For reverce The deque
    void reversedeque(){
        if(rev==0) rev =1;
        else rev =0;
    }
    void pushBack(int value){
        if(rev == 0){
            InserAtTail(value);
        }
        else{
            InserAtHead(value);
        }
    }
    void pushFront(int value){
        if(rev == 0){
           InserAtHead(value);
        }
        else{
            InserAtTail(value);
        }
    }
    void popBack(){
        if(rev == 0){
           DeleteAtTail();
        }
        else{
            DeleteAtHead();
        }
    }
    void popFront(){
        if(rev == 0){
           DeleteAtHead();
        }
        else{
            DeleteAtTail();
        }
    }
    int front(){
         if(size == 0){
            cout << "The Deque is Empty\n";
            return -1;
        }
        if(rev==0) return head->data;
        else return tail->data;
    }
    
    int back(){
         if(size == 0){
            cout << "The Deque is Empty\n";
            return -1;
        }
        if(rev==0) return tail->data;
        else return head->data;
        
    }

};

int main(){

    Deque d;
    d.pushBack(5);
    d.pushBack(10);
    d.pushBack(15);
    d.pushFront(20);
    d.reversedeque();
    cout << "back = " << d.back() << " Front  = " << d.front() << endl << endl;
    
    d.popBack();
    cout << "back = " << d.back() << " Front  = " << d.front() << endl;
    d.popFront();
    cout << "back = " << d.back() << " Front  = " << d.front() << endl;



    return 0;
}





========================================================================================================



// Deque Oparetion Using Dubly LinkedList
#include <bits/stdc++.h>
using namespace std;

class node{
public: 
    int data;
    node* next;
    node* prv;
};
class Deque{
public: 
    node* head;
    node* tail;
    int size;

    Deque(){ //constructor 
        head = NULL;
        tail =NULL;
        size = 0;
    }

    node* createNewNode(int value){ // Create newNode and retun the node
        node* newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prv = NULL;
        return newNode;
    }

    //Push back Deqe O(1)
    void pushBack(int value){
        node* newNode = createNewNode(value);
        if(size == 0){
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        tail->next = newNode;
        newNode->prv = tail;
        tail = newNode;
        size++;
    }

    // Push front
    void pushFront(int value){
        node* newNode = createNewNode(value);
        if(size == 0){
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        head->prv = newNode;
        newNode->next = head;
        head = newNode;
        size++;
    }

    //Pop Back O(1)
    void popBack(){
        if(size == 0){
            cout << "The Deque is Empty\n";
            return;
        }
        if(size == 1){
            delete tail;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        node* a = tail;
        tail = tail->prv;
        delete a;
        tail->next = NULL;
        size--;
    }
    
    //Pop Front O(1)
    void popFront(){
        if(size == 0){
            cout << "The Deque is Empty\n";
            return;
        }
        if(size == 1){
            delete head;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        node* a = head;
        head = head->next;
        delete a;
        head->prv = NULL;
        size--;
    }

    int front(){
         if(size == 0){
            cout << "The Deque is Empty\n";
            return -1;
        }
        return head->data;
    }
    
    int back(){
         if(size == 0){
            cout << "The Deque is Empty\n";
            return -1;
        }
        return tail->data;
    }
    int getSize(){
        return size;
    }


    


};

int main(){

    Deque d;
    d.pushBack(10);
    d.pushBack(30);
    cout << "back = " << d.back() << " Front  = " << d.front() << endl;
    d.pushFront(235);
    d.pushFront(65756);
    cout << "back = " << d.back() << " Front  = " << d.front() << endl << endl;
    
    
    d.popBack();
    cout << "back = " << d.back() << " Front  = " << d.front() << endl;
    d.popFront();
    cout << "back = " << d.back() << " Front  = " << d.front() << endl;



    return 0;
}















*/
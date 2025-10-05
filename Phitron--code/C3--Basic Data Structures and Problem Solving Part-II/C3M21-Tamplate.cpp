// stack shot, reverce the stack, stack using template






/*


// Short Stack using tamp stack in dubly linkedlist O(n^2)
#include <bits/stdc++.h>
using namespace std;


template <class T>
class node{
public: 
    T data;
    node* next;
    node* prv;
};

template <class T>
class dublyLinkedList{
public: 
    node<T> *head;
    int size;

    dublyLinkedList(){ //constructor 
        head = NULL;
        size = 0;
    }

    node<T>* createNewNode(T value){ // Create newNode and retun the node
        node<T> *newNode = new node<T>;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prv = NULL;
        return newNode;
    }

    // insert a value at head .... time complexity O(1)
    void insertAtHead(T data){
        size++;
        node<T> *newNode = createNewNode(data);
        if (head==NULL){
            head = newNode;
            return;
        }
        node<T>* ptr = head;
        newNode->next = ptr;
        ptr->prv = newNode;
        head =newNode;
    }

    // Traversing LinkedList
    void traversing(){
        node<T>* ptr = head;
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
    // Delete value At head 
    void deleteAtHead(){
        if(head==NULL) return;
        node<T>* a = head;
        node<T>* b = a->next;
        if(b != NULL) b->prv = NULL;
        head = b;
        delete a;
        size--;
    }

};

template <class T>
class Stack{
public:
    dublyLinkedList<T> dl;

    // return Top element
    T top(){
        if(dl.getSize()==0){
            cout << "Error";
            T a;
            return a;
        }
        return dl.head->data ;
    }

    //Push a Value on top
    void push(T value){
        dl.insertAtHead(value);
    }

    // Delete a top
    void pop(){
        if(dl.getSize()==0){
            cout << "Error";
            return;
        }
        dl.deleteAtHead();
    }

    // get size
    int getStSize(){
        return dl.getSize();
    }



};


int main(){
    
    Stack <int> st;
    st.push(5);
    st.push(2);
    st.push(7);
    st.push(8);
    st.push(3);
    
    Stack <int> tamp;
    while (st.getStSize()>0){
       int t = st .top();
       st.pop();
       while (tamp.getStSize()>0){
            if (tamp.top() < t) break;
            st.push(tamp.top());
            tamp.pop();
       }
       tamp.push(t);
    }
    swap(st,tamp);
    // for output
    while (st.getStSize()>0){
        cout << st.top() << "\n";
        st.pop();
    }
    


    return 0;

}



// Stack using tamplete on Dubly LinkedList
#include <bits/stdc++.h>
using namespace std;


template <class T>
class node{
public: 
    T data;
    node* next;
    node* prv;
};

template <class T>
class dublyLinkedList{
public: 
    node<T> *head;
    int size;

    dublyLinkedList(){ //constructor 
        head = NULL;
        size = 0;
    }

    node<T>* createNewNode(T value){ // Create newNode and retun the node
        node<T> *newNode = new node<T>;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prv = NULL;
        return newNode;
    }

    // insert a value at head .... time complexity O(1)
    void insertAtHead(T data){
        size++;
        node<T> *newNode = createNewNode(data);
        if (head==NULL){
            head = newNode;
            return;
        }
        node<T>* ptr = head;
        newNode->next = ptr;
        ptr->prv = newNode;
        head =newNode;
    }

    // Traversing LinkedList
    void traversing(){
        node<T>* ptr = head;
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
    // Delete value At head 
    void deleteAtHead(){
        if(head==NULL) return;
        node<T>* a = head;
        node<T>* b = a->next;
        if(b != NULL) b->prv = NULL;
        head = b;
        delete a;
        size--;
    }

};

template <class T>
class Stack{
public:
    dublyLinkedList<T> dl;

    // return Top element
    T top(){
        if(dl.getSize()==0){
            cout << "Error";
            T a;
            return a;
        }
        return dl.head->data ;
    }

    //Push a Value on top
    void push(T value){
        dl.insertAtHead(value);
    }

    // Delete a top
    void pop(){
        if(dl.getSize()==0){
            cout << "Error";
            return;
        }
        dl.deleteAtHead();
    }

    // get size
    int getStSize(){
        return dl.getSize();
    }



};

int main(){

    Stack<double> st;
    st.push(4.34);
    st.push(65.3254325);
    st.push(234.35);

    // Reverce stack
    Stack <double> tamp;
    while (st.getStSize()>0){
        tamp.push(st.top());
        st.pop();
    }
    swap(st,tamp);

    // for output
    while (st.getStSize()>0){
        cout << st.top() << "\n";
        st.pop();
    }
    
    
    return 0;

}




// Stack using tamplete on Dubly LinkedList
#include <bits/stdc++.h>
using namespace std;


template <class T>
class node{
public: 
    T data;
    node* next;
    node* prv;
};

template <class T>
class dublyLinkedList{
public: 
    node<T> *head;
    int size;

    dublyLinkedList(){ //constructor 
        head = NULL;
        size = 0;
    }

    node<T>* createNewNode(T value){ // Create newNode and retun the node
        node<T> *newNode = new node<T>;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prv = NULL;
        return newNode;
    }

    // insert a value at head .... time complexity O(1)
    void insertAtHead(T data){
        size++;
        node<T> *newNode = createNewNode(data);
        if (head==NULL){
            head = newNode;
            return;
        }
        node<T>* ptr = head;
        newNode->next = ptr;
        ptr->prv = newNode;
        head =newNode;
    }

    // Traversing LinkedList
    void traversing(){
        node<T>* ptr = head;
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
    // Delete value At head 
    void deleteAtHead(){
        if(head==NULL) return;
        node<T>* a = head;
        node<T>* b = a->next;
        if(b != NULL) b->prv = NULL;
        head = b;
        delete a;
        size--;
    }

};

template <class T>
class Stack{
public:
    dublyLinkedList<T> dl;

    T top(){
        if(dl.getSize()==0){
            cout << "Error";
            T a;
            return a;
        }
        return dl.head->data ;
    }

    void push(T value){
        dl.insertAtHead(value);
    }
    void pop(){
        if(dl.getSize()==0){
            cout << "Error";
            return;
        }
        dl.deleteAtHead();
    }


};

int main(){

    Stack<double> st;
    st.push(4.34);
    cout << st.top() << endl;
    st.push(65.3254325);
    cout << st.top() << endl;
    st.push(234.35);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl << endl;
    
    
    Stack<char> ch;
    ch.push('a');
    ch.push('b');
    ch.push('c');
    cout << ch.top() << endl;
    ch.pop();
    cout << ch.top() << endl;
    ch.pop();
    cout << ch.top() << endl;
    ch.pop();
    cout << ch.top() << endl;
    
    return 0;

}







//Stack Using Tampelte on cdynamic array
#include <bits/stdc++.h>
using namespace std;

template <class T>
class Stack{
public:
    
    T *a;
    int stackSize;
    int arrayCap;
    Stack(){
        a = new T[1];
        arrayCap = 1;
        stackSize = 0;
    }

    //Increase array size
    void increaseSize(){
        T *tamp;
        tamp = new T[arrayCap*2];
        for (int i = 0; i < arrayCap; i++){
            tamp[i] = a[i];
        }
            
        swap(a,tamp);
        delete []tamp;
        arrayCap = arrayCap*2;
    }

       //Add Data in stack O(1)
    void push(T value){
        if(stackSize+1 > arrayCap){
            increaseSize();
        }
        stackSize++;
        a[stackSize-1] = value;
    }

    // Delete top element from stack O(1)
    void pop(){
        if(stackSize==0){
            cout << "Stack Is Empty";
            return;
        }
        
        stackSize--;
    }

    //Retun the top element from the top
    T top(){
        if(stackSize==0){
            cout << "Stack Is Empty";
            //assart(false);
            T a;
            return a;
        }
        return a[stackSize-1];
    }


};

int main(){


    Stack<double> st;
    st.push(4.34);
    cout << st.top() << endl;
    st.push(65.3254325);
    cout << st.top() << endl;
    st.push(234.35);
    cout << st.top() << endl << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    
    
    Stack<char> ch;
    ch.push('a');
    ch.push('b');
    ch.push('c');
    cout << ch.top() << endl << endl;
    ch.pop();
    cout << ch.top() << endl;
    ch.pop();
    cout << ch.top() << endl;
    ch.pop();
    cout << ch.top() << endl;
    return 0;

}



*/
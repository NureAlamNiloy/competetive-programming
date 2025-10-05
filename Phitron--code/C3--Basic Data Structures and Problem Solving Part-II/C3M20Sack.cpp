



/*



// Stack using Dubly LinkedList
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
    // Delete value At head 
    void deleteAtHead(){
        if(head==NULL) return;
        node* a = head;
        node* b = a->next;
        if(b != NULL) b->prv = NULL;
        head = b;
        delete a;
        size--;
    }

};

class Stack{
public:
    dublyLinkedList dl;

    int top(){
        if(dl.getSize()==0){
            cout << "Error";
            return -1;
        }
        return dl.head->data ;
    }

    void push(int value){
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

    Stack st;
    st.push(4);


    cout << st.top() << endl;
    st.push(10);
    cout << st.top() << endl;
    st.push(234);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    return 0;

}









// Stack Using Static Array
#include <bits/stdc++.h>
using namespace std;

const int maxSize = 500;
class Stack{
public:
    
    int a[maxSize];
    int stackSize;
    Stack(){
        stackSize = 0;
    }

    //Add Data in stack O(1)
    void push(int value){
        if(stackSize> maxSize){
            cout << "ERROR";
            return;
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
        a[stackSize-1] = 0;
        stackSize--;
    }

    //Retun the top element from the top
    int top(){
        if(stackSize==0){
            cout << "Stack Is Empty";
            return -1;
        }
        return a[stackSize-1];
    }

};

int main(){

    Stack st;
    st.push(4);


    cout << st.top() << endl;
    st.push(10);
    cout << st.top() << endl;
    st.push(234);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    return 0;

}




//Stack Using Dynamic Array
#include <bits/stdc++.h>
using namespace std;

class Stack{
public:
    
    int *a;
    int stackSize;
    int arrayCap;
    Stack(){
        a = new int[1];
        arrayCap = 1;
        stackSize = 0;
    }

    //Increase array size
    void increaseSize(){
        int *tamp;
        tamp = new int[arrayCap*2];
        for (int i = 0; i < arrayCap; i++){
            tamp[i] = a[i];
        }
            
        swap(a,tamp);
        delete []tamp;
        arrayCap = arrayCap*2;
    }

       //Add Data in stack O(1)
    void push(int value){
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
        
        a[stackSize-1] = 0;
        stackSize--;
    }

    //Retun the top element from the top
    int top(){
        if(stackSize==0){
            cout << "Stack Is Empty";
            return -1;
        }
        return a[stackSize-1];
    }


};

int main(){

    Stack st;
    st.push(4);
    cout << st.top() << endl;
    st.push(65);
    cout << st.top() << endl;
    st.push(234);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    return 0;

}
























*/



/*


// Binary Number Problem Using Queue
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    queue<string>q;
    q.push("1");
    for (int i = 1; i <= n; i++){
        cout << "Binary Representation of " << i << " is = " << q.front()<<endl;
        string tamp = q.front();
        q.pop();
        q.push(tamp + "0");
        q.push(tamp + "1");
    }
    


    return 0;
}




======================================================================


// Queue Using STL BulildIn queue
#include <bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;
    // enqueue O(1)
    q.push(5);
    q.push(10);
    q.push(15);

    //Front element
    cout << "Q front element " << q.front() << endl;
     cout << "Q size is =  " << q.size() << endl;
    // Dequeue
    q.pop();
    cout << "Q front element " << q.front() << endl;
    q.pop();
    cout << "Q front element " << q.front() << endl;
    q.pop();
    cout << "Q front element " << q.front() << endl;
    cout << "Q size is =  " << q.size() << endl;
    cout << q.empty() << endl;
    

    // Char
    queue<char> q2;
    q2.push('a');
    q2.push('b');
    q2.push('c');
   q2.pop();
    cout << "Q front element " << q2.front() << endl;
    q2.pop();
    cout << "Q front element " << q2.front() << endl;
    q2.pop();
    cout << "Q front element " << q2.front() << endl;
    cout << "Q size is =  " << q2.size() << endl; 


    return 0;
}



=========================================================================



// Queue Using Linked List
#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* nxt;
};
class Queue{
public:
    node* head;
    node* tail;
    int size;
    Queue(){
        head =NULL;
        tail =NULL;
        size =0;
    }
    node* CreateNode(int value){
        node* newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

     // Insert Item from queue
    void enqueue (int value){
        size++;
        node* newNode= CreateNode(value);
        if (head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->nxt = newNode;
        tail = newNode;
    }

    // Delete Item from queue
    void dequeue(){
        if(size==0){
            cout << "Queue is empty";
            return;
        }
        if(size==1){
            delete head;
            head = NULL;
            tail = NULL;
            size--;
            return;
        }
        node* a = head;
        head = a->nxt;
        delete a;
        size--;
    }

    //Front of queue
    int front(){
        if(size==0){
            cout << "Queue is empty";
            return -1;
        }
        return head->data;
    }

    int getSize(){
        return size;
    }

};

int main(){

    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    cout << "Q size is = " << q.getSize() << endl;
    cout << "Q front element " << q.front() << endl;

    q.dequeue();
    cout << "Q front element " << q.front() << endl;
    q.dequeue();
    cout << "Q front element " << q.front() << endl;
    q.dequeue();
    cout << "Q front element " << q.front() << endl;
    cout << "Q size is = " << q.getSize() << endl;


    return 0;
}



*/


// Queue Using Dinamic Cricular array
#include <bits/stdc++.h>
using namespace std;

class Queue{
public:
    int *a;
    int arrCap;
    int l,r;
    int sz;
    Queue(){
        a= new int[1];
        l=0;
        r=-1;
        sz=0;
        arrCap = 1;
    }

    void removeCircular(){
        if(l>r){
            int *tamp = new int[arrCap];
            int idx =0;
            for (int i = l; i < arrCap; i++){
                tamp[idx] = a[i];
                idx++;
            }
            for (int i = 0; i < r; i++){
                tamp[idx] = a[i];
                idx++;
            }
            swap(tamp,a);   
            delete []tamp;         
        }
        
    }
    
    void increaseSize(){
        removeCircular();
        int *tamp = new int[arrCap*2];
        for (int i = 0; i < arrCap; i++){
            tamp[i] = a[i];
        }
        swap(a,tamp);
        arrCap*=2;
        delete []tamp;
    }

    // Push element on Queue
    void enqueue(int value){
        if(sz == arrCap){
            increaseSize();
        }
        r++;
        if( r == arrCap){
            r=0;
        }
        a[r] = value;
        sz++;
    }
    
   
    // Pop element on Queue
    void dequeue(){
        if(l>r){
            cout << "Queue is empty\n";
            return;
        }
        l++;
         if(l== arrCap){
            l=0;
        }
        sz--;
    }
   
    // Top element on Queue
    int front(){
        if(sz==0){
            cout << "Queue is empty\n";
            return -1;
        }
        return a[l];
    }
   
    // Size of Queue
    int Size(){
        return sz;
    }



};

int main(){

    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(10);

    cout << "Queue Size is = " <<  q.Size() << endl;
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;

    return 0;
}

/*






// Queue Using Cricular array
#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 5;
class Queue{
public:
    int arr[MaxSize];
    int l,r;
    int sz;
    Queue(){
        l=0;
        r=-1;
        sz=0;
    }

    // Push element on Queue
    void enqueue(int value){
        if(sz == MaxSize){
            cout << "Queue is Full\n";
            return;
        }
        r++;
        if(r== MaxSize){
            r=0;
        }
        arr[r] = value;
        sz++;
    }
   
    // Pop element on Queue
    void dequeue(){
        if(l>r){
            cout << "Queue is empty\n";
            return;
        }
        l++;
         if(l== MaxSize){
            l=0;
        }
        sz--;
    }
   
    // Top element on Queue
    int front(){
        if(sz==0){
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[l];
    }
   
    // Size of Queue
    int Size(){
        return sz;
    }



};

int main(){

    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(10);

    cout << "Queue Size is = " <<  q.Size() << endl;
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    
    return 0;
}






// Queue usinf static array
#include <bits/stdc++.h>
using namespace std;
const int MaxSize = 500;
class Queue{
public:
    int arr[MaxSize];
    int l,r;

    Queue(){
        l=0;
        r=-1;
    }

    // Push element on Queue
    void enqueue(int value){
        if(r+1 >= MaxSize){
            cout << "Queue is Full\n";
            return;
        }
        r++;
        arr[r] = value;
    }
   
    // Pop element on Queue
    void dequeue(){
        if(l>r){
            cout << "Queue is empty\n";
            return;
        }
        l++;
    }
   
    // Top element on Queue
    int front(){
        if(l>r){
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[l];
    }
   
    // Size of Queue
    int Size(){
        return r-l+1;
    }



};

int main(){

    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(10);

    cout << "Queue Size is = " <<  q.Size() << endl;
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << q.front() << endl;
    q.dequeue();
    cout << "Queue Size is = " << q.Size() << endl;


    return 0;
}







*/
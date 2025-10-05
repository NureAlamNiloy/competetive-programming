

/*



// priority Queue problem
#include <bits/stdc++.h>
using namespace std;

int digit(int x){
    int count = 0;
    while(x !=0){
        x = x/10;
        count++;
    }
}

int main(){

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    priority_queue<int> p1;
    priority_queue<int> p2;

    for (int i = 0; i < n; i++){
        p1.push(a[i]);
        p2.push(b[i]);
    }
    int ans = 0;
    while (p1.size()){
        int x = p1.top();
        int y = p2.top();
        if(x==y){
            p1.pop();
            p1.pop();
            continue;
        }
        ans++;
        if(x>y){
            p1.pop();
            p1.push(digit(x));
        }
        else{
            p2.pop();
            p2.push(digit(y));
        }
    }
    cout << ans << endl;
    return 0;
}




==============================================================================


// priority Queue using STL
#include <bits/stdc++.h>
using namespace std;
int main(){


    priority_queue<int> p;
    p.push(10);
    p.push(5);
    p.push(3);
    p.push(8);
    p.push(9);
    while (p.size() !=0){
        cout << p.top() << " ";
        p.pop(); 
    }
    cout << endl;
    return 0;
}



================================================================================


// priority Queue
#include <bits/stdc++.h>
using namespace std;

class maxHeap{
public:
    vector<int> node;
    maxHeap(){

    } 

    // Up Heapify oparetion O(log n)
    void upHeapify(int index){
        while (index > 0 && node[index] > node[(index-1)/2] ){
            swap(node[index] , node[(index-1)/2]);
            index = (index-1)/2;
        }
        
    }
    // Down Heapify O(lo n)
    void downHeapify(int index){
        while (1){
            int largest = index;
            int left = 2*index+1;
            int right = 2*index+2;
            if(left < node.size() && node[largest] < node[left]) largest = left;
            
            if(right < node.size() && node[largest] < node[right]) largest = right;  

            if(largest == index) break; 
            swap(node[index] , node[largest]);
            index = largest;
        }
        
    }

    //Inser value on heap O(1)
    void insertHeap(int x){
        node.push_back(x);
        upHeapify(node.size()-1);
    }

    // Print the heap O(1)
    void printMaxHeap(){
        for (int i = 0; i< node.size(); i++){
            cout << node[i] << "  ";
        }
        cout << endl;
    }
    //  delete index from heap O(1)
    void deleteHeap(int index){
        if(index >= node.size()){
            cout << " ERROR Heap is empty \n";
            return;
        }
        swap(node[index], node[node.size()-1]);
        node.pop_back();
        downHeapify(index);
    }
    // max elemen on heap O(1)
    int getMax(){
        if(node.empty()){
            cout << " ERROR Heap is empty \n";
            return -1;
        }
        return node[0];
    }
    // Extract max value O(log n)
    int estractMax(){
        if(node.empty()){
            cout << " ERROR Heap is empty \n";
            return -1;
        }
        int value = node[0];
        deleteHeap(0);
        return value;
    }
    
    // Build max heap by array
    void buildByArray(vector<int> &a){
        node = a;
        int n = node.size();
        int lastNonLeaf = (n/2)-1;
        for (int i = lastNonLeaf; i >= 0; i--){
            downHeapify(i);
        }
    }

    int getSize(){
        return node.size();
    }
    


};
//priority queue
class priorityQueue{
public:
    maxHeap h;

    void pushPQ(int x){
        h.insertHeap(x);
    }
    
    void popPQ(){
        h.deleteHeap(0);
    }
    int topPQ(){
        return h.getMax();
    }
    int getSizePQ(){
        return h.getSize();
    }

};

int main(){

    priorityQueue p;
    p.pushPQ(5);
    p.pushPQ(7);
    p.pushPQ(10);
    p.pushPQ(1);
    p.pushPQ(2);
    while (p.getSizePQ() !=0){
        cout << p.topPQ() << " ";
        p.popPQ(); 
    }
    

    cout << endl;
    return 0;
}



===========================================================================


// heap with extra
#include <bits/stdc++.h>
using namespace std;

class maxHeap{
public:
    vector<int> node;
    maxHeap(){

    } 

    // Up Heapify oparetion O(log n)
    void upHeapify(int index){
        while (index > 0 && node[index] > node[(index-1)/2] ){
            swap(node[index] , node[(index-1)/2]);
            index = (index-1)/2;
        }
        
    }
    // Down Heapify O(lo n)
    void downHeapify(int index){
        while (1){
            int largest = index;
            int left = 2*index+1;
            int right = 2*index+2;
            if(left < node.size() && node[largest] < node[left]) largest = left;
            
            if(right < node.size() && node[largest] < node[right]) largest = right;  

            if(largest == index) break; 
            swap(node[index] , node[largest]);
            index = largest;
        }
        
    }

    //Inser value on heap O(1)
    void insertHeap(int x){
        node.push_back(x);
        upHeapify(node.size()-1);
    }

    // Print the heap O(1)
    void printMaxHeap(){
        for (int i = 0; i< node.size(); i++){
            cout << node[i] << "  ";
        }
        cout << endl;
    }
    //  delete index from heap O(1)
    void deleteHeap(int index){
        if(index >= node.size()){
            cout << " ERROR Heap is empty \n";
            return;
        }
        swap(node[index], node[node.size()-1]);
        node.pop_back();
        downHeapify(index);
    }
    // max elemen on heap O(1)
    int getMax(){
        if(node.empty()){
            cout << " ERROR Heap is empty \n";
            return -1;
        }
        return node[0];
    }
    // Extract max value O(log n)
    int estractMax(){
        if(node.empty()){
            cout << " ERROR Heap is empty \n";
            return -1;
        }
        int value = node[0];
        deleteHeap(0);
        return value;
    }
    
    // Build max heap by array
    void buildByArray(vector<int> &a){
        node = a;
        int n = node.size();
        int lastNonLeaf = (n/2)-1;
        for (int i = lastNonLeaf; i >= 0; i--){
            downHeapify(i);
        }
    }

    


};
// Heap sort O(n logn)
vector <int> heapSort(vector<int>a){
    maxHeap hp;
    hp.buildByArray(a);
    vector<int> ans;
    for (int i = 0; i < a.size(); i++){
        ans.push_back(hp.estractMax());
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){

    maxHeap h;
    vector <int> a ={1,2,3,4,10,9,8,7};
    vector <int> sortedA = heapSort(a);
    for (int i = 0; i < a.size(); i++){
        cout << sortedA[i] << " ";
    }
    cout << endl;
    return 0;
}







*/
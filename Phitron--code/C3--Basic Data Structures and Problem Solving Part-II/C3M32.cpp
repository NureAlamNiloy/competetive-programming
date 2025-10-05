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

};

int main(){

    maxHeap h;
    h.insertHeap(4);
    h.insertHeap(7);
    h.insertHeap(9);
    h.insertHeap(1);
    h.insertHeap(10);
    h.insertHeap(20);
    h.insertHeap(30);
    h.printMaxHeap();
    h.deleteHeap(0);
    h.printMaxHeap();
    cout << "Max element " << h.getMax() << endl;
    cout << " extract Max element " << h.estractMax() << endl;

    return 0;
}
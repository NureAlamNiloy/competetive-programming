
// Binary search, Array Insersion, Array Deletion...

#include <bits/stdc++.h>
using namespace std;

int main(){
   
    int n,k;
    cin >> n >> k;
    vector <int> arr;
    arr.resize(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int low =0, high = n-1;
    while (low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            cout << "YES" ;
            return 0;
        }
        if (k>arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    
    cout << "NO";

    return 0;
}

//Module--5


/*


//binary Search
#include <bits/stdc++.h>
using namespace std;

int main(){
   
    int n,k;
    cin >> n >> k;
    vector <int> arr;
    arr.resize(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int low =0, high = n-1;
    while (low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            cout << "YES" ;
            return 0;
        }
        if (k>arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    
    cout << "NO";

    return 0;
}




//Dynamic Array Delesion________
#include <bits/stdc++.h>
using namespace std;

class ArrOpa // Memory Complexity O(n)
{
private:
    int cap;
    int sz;
    int *arr;
    void IncreaseSz(){
        cap*=2;
        int *tamp = new int[cap];
        for (int i = 0; i < sz; i++){
            tamp[i]=arr[i];
        }
        delete[] arr;
        arr = tamp;
        
    }
public:
    ArrOpa(){
        arr= new int[1];
        cap =1;
        sz=0;
    }
    void PushArr(int x){
        if(cap==sz){
            IncreaseSz();
        }
        arr[sz]=x;
        sz++;
    }

    void insert(int pos,int x){
        if(cap==sz){
            IncreaseSz();
        }
        for (int i = sz-1; i>pos; i--){
            arr[i+1]=arr[i]; 
        }
        arr[pos]=x;
        sz++;
        
    }

    void Print(){
        for (int i = 0; i < sz; i++){
            cout << arr[i] << " " ;
        }
        cout << "\n";
    }

    int getSize(){
        return sz;
    }
    int getElement(int idx){
        if(idx>=sz){
            cout << "Error";
            return -1;
        }
        return arr[idx];
    }

    void Erase(int pos){
        if(pos>=sz){
            cout << "Error";
            return;
        }
        for (int i = pos+1; i < sz; i++){
           // arr[i-1] = arr[i];
            swap(arr[i-1], arr[i]);
        }
        sz--;
    }
};


int main(){

    ArrOpa a;
    a.PushArr(10);
    a.PushArr(20);
    a.PushArr(30);
    a.PushArr(40);
    a.PushArr(50);
    //a.insert(1,4636456);
    a.Print();

    a.Erase(3);
    a.Print();
   


    return 0;
}






//Dynamic Array Insertion________
#include <bits/stdc++.h>
using namespace std;

class ArrOpa // Memory Complexity O(n)
{
private:
    int cap;
    int sz;
    int *arr;
    void IncreaseSz(){
        cap*=2;
        int *tamp = new int[cap];
        for (int i = 0; i < sz; i++){
            tamp[i]=arr[i];
        }
        delete[] arr;
        arr = tamp;
        
    }
public:
    ArrOpa(){
        arr= new int[1];
        cap =1;
        sz=0;
    }
    void PushArr(int x){
        if(cap==sz){
            IncreaseSz();
        }
        arr[sz]=x;
        sz++;
    }

    void insert(int pos,int x){
        if(cap==sz){
            IncreaseSz();
        }
        for (int i = sz-1; i>pos; i--){
            arr[i+1]=arr[i]; 
        }
        arr[pos]=x;
        sz++;
        
    }

    void Print(){
        for (int i = 0; i < sz; i++){
            cout << arr[i] << " " ;
        }
        cout << "\n";
    }

    int getSize(){
        return sz;
    }
    int getElement(int idx){
        if(idx>sz){
            cout << "Error";
            return -1;
        }
        return arr[idx];
    }
};


int main(){

    ArrOpa a;
    a.PushArr(10);
    a.PushArr(20);
    a.PushArr(30);
    a.PushArr(40);
    a.PushArr(50);
    a.insert(1,4636456);
    a.Print();
   

    cout << a.getSize() << endl;
    for (int i = 0; i < a.getSize(); i++)
    {
        cout << a.getElement(i) << " ";
    }
    

    return 0;
}




*/
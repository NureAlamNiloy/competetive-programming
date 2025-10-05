#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,q,k;
    cin >> n;
    vector <int> arr;
    arr.resize(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++){ 
        int low =0, high = n-1;
        cin >> k;
        int flag=0;
        while (low<=high){
            int mid = (high+low)/2;
            if (arr[mid] == k){
                cout << "Yes" << "\n";
                flag =1;
                break;
            }
            if (k>arr[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        if (flag==0){
            cout << "NO" << "\n";
        }
    }
    

    return 0;
}










/*


//P3---
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < (n-i-1); j++){
        
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
        cout << "\n";
    }
    for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
    }
    
    return 0;
}



//P2----
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,q,k;
    cin >> n;
    vector <int> arr;
    arr.resize(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++){ 
        int low =0, high = n-1;
        cin >> k;
        int flag=0;
        while (low<=high){
            int mid = (high+low)/2;
            if (arr[mid] == k){
                cout << "Yes" << "\n";
                flag =1;
                break;
            }
            if (k>arr[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        if (flag==0){
            cout << "NO" << "\n";
        }
    }
    

    return 0;
}



//P1----
#include <bits/stdc++.h>
using namespace std;

int main(){
    1.O(n)
    2.O(n^2)
    3.O(n^3)
    4.O(n^2)
    5.O(n^2)
    6.O(n^2)

    return 0;
}





*/

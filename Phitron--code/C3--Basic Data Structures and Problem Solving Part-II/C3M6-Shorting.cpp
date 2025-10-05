


/*


//prime number
#include <bits/stdc++.h>
using namespace std;
int main(){
    // Time complexity O(nLogn)
    int n;
    cin >> n;
    vector <int> prime;
    vector <bool> visited(n+1);
    for (int i = 2; i <= n; i++){
       if (visited[i]==false){
            prime.push_back(i);
            for (int j = 2; i*j <= n; j++){
                visited[i*j] = true;
            }
       }
    }
    cout << prime.size() << endl;
    for (int i = 0; i < prime.size(); i++){
        cout << prime[i] << " ";
    }
    
    return 0;
}





//Inserxsion Short
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
        int index = i;
        while (index>0){
            if(arr[index-1]>arr[index]){
                swap(arr[index-1],arr[index]);
                index--;
            }
            else{
                break;
            }
        }
        cout << "Considaring " << i << ": ";
       
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
         cout << "\n";
    }
    cout << "After Sorting =  ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}



//Bubble Short with Stl function
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
        int last=(n-i-1);
        bool shorted = true;
        for (int j = 0; j < last ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                shorted = false;
            }
            
        }
        if(shorted){
            break;
        }
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}



//Bubble short 
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
        for (int j = i; j < n; j++){
            if(arr[i]>arr[j]){
                int tamp = arr[i];
                arr[i] = arr[j];
                arr[j] = tamp;
            }
        }
        cout << arr[i] << " ";
    }
    
    return 0;
}


*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    

    vector<int>a={21,32,534,74,34,5,78,54};
    for (int i = 0; i < a.size(); i++){
        cout << a[i] <<" ";
    }
    cout << endl;
    sort(a.begin(),a.begin()+4); // sort some value
    for (int i = 0; i < a.size(); i++){
        cout << a[i] <<" ";
    }
    
   
    
    // swap(a,b);//Swap 2 variable
    // int mini = min(a,b);// Find min value
    // int maxi = max({a,b});// Find max value


    return 0;
}
















/*


//Vector
#include<bits/stdc++.h>
using namespace std;


int main(){
    

    vector <int> a;
    
    vector <float> b;
    vector <char> c;
    for (int i = 0; i < 10; i++){
        a.push_back(i);
    }
   
    a.insert(a.begin()+3,2314); //Incert Data in vector
     a.erase(a.begin()); //Delete Data in vector
    a.pop_back(); //Delete Data in vector
    a.resize(10);// vactor er size barano komano jay
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    

    return 0;
}



//Dynamic Memory
#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int* y = new int;
    *y=10;
    cout << y << endl;
    cout << *y << endl;

    delete y;

    return 0;
}




//Pointer
#include<bits/stdc++.h>
using namespace std;



int main(){
    int x=10;
    int* y = &x;
    cout << x << endl;
    cout << y << endl;
    cout << *y << endl;

    return 0;
}


//Function
#include <iostream>
using namespace std;

string fun(string &s){
    s.erase(s.begin()+0);
    s.pop_back();
    return s;
}

void swping(int &a,int &b){
    int tamp = a;
    a=b;
    b=tamp;
}


int main(){
    
    int x,y;
    cin >> x >> y;
    swping(x,y);
    cout << x << "  " << y;

    return 0;
}



// String 
#include <iostream>
using namespace std;

int main(){

    string a="Niloy";
    string b=" Sumaiya";
    string c=a+b;
    int n = c.size();//String Size
    cout << n << endl << c << endl;
    for (int i = 0; i < n; i++){
        c[i]+=1;
    }
    c.pop_back(); // delete last char of string
    c.erase(c.begin()+4); // Dlete nth char of a string
    cout << c;

    string str;
    getline(cin,str);//String Input Function
    cout << str;

    

    return 0;
}
















//A
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    cout << n << " ";
    while(n!=1){
        
        if(n%2==0){
            n/=2;
        }
        else{
            n=(n*3)+1;
        }
        cout << n << " ";
    }


    return 0;
}













*/
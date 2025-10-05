// Map using (STL)
#include <bits/stdc++.h>
using namespace std;

int main(){

    
    map<string, int> mp;
    //insert on map O(n)
    mp["Niloy"] = 581567; 
    mp["jony"] = 581593; 
    mp["Sumo"] = 581600; 

    
    // Value of a key
    cout <<mp["Niloy"] << endl; 
    cout <<mp["Sumo"] << endl; 

    // Size of map O(1)
    cout <<mp.size() << endl; 

    // print map O(n)
    for(auto it:mp){
        cout << " Map is = " << it.first << "\t"<< it.second << endl; 
    }
    
    return 0;
}

/*


// Map using (STL)
#include <bits/stdc++.h>
using namespace std;

int main(){

    
    map<string, int> mp;
    //insert on map O(n)
    mp["Niloy"] = 581567; 
    mp["jony"] = 581593; 
    mp["Sumo"] = 581600; 

    
    // Value of a key
    cout <<mp["Niloy"] << endl; 
    cout <<mp["Sumo"] << endl; 

    // Size of map O(1)
    cout <<mp.size() << endl; 

    // print map O(n)
    for(auto it:mp){
        cout << " Map is = " << it.first << "\t"<< it.second << endl; 
    }
    
    return 0;
}




============================================================================



// Pair using (STL)
#include <bits/stdc++.h>
using namespace std;

int main(){

    
    pair<string, int> a;
    a.first="Niloy ";
    a.second = 581567;
    
    cout << a.first << a.second << endl; 
    
    pair<double, int> b;
    b.first=786.076587650;
    b.second = 581567;

    cout << b.first << "\t"<< b.second << endl; 
    
    return 0;
}





===================================================================================




// MultiSet using (STL)
#include <bits/stdc++.h>
using namespace std;

int main(){

    multiset <int> mt;
    // insert O(log n)
    mt.insert(5);
    mt.insert(7);
    mt.insert(4);
    mt.insert(3);
    mt.insert(4);
    mt.insert(7);

    // print Multiset O(n)
    for (auto i: mt){
        cout << i << " ";
    }
    cout << endl ;
    cout << "MultiSet size is = "<< mt.size() << endl;
   

    // erase all ocarance on multi set O(log n)
    mt.erase(4);
    // erase just one ocarance on multi set
    mt.erase(mt.find(7));

     cout << "After erase \n";
    // print Multiset O(n)
    for (auto i: mt){
        cout << i << " ";
    }
    cout << endl ;

    // find element on multiset O(log n)
    if(mt.find(4) != mt.end()) cout <<  "\nElement Found \n";
    else cout <<  "Element not Found \n";

    return 0;
}





======================================================================================




// Set using (STL)
#include <bits/stdc++.h>
using namespace std;

int main(){

    set <int> st;
    // insert O(log n)
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);

    // print set O(n)
    for (auto i:st){
        cout << i << "  ";
    }
    cout << endl ;
    cout << "Set size is = "<< st.size() << endl;
    
    // delete element on set O(log n)
    st.erase(5);

    cout << "\nAfter erase the set" << endl ;
    // another way to print set
    for (auto i = st.begin(); i != st.end(); i++){
        cout << *i << "  ";
    }

    // find element on set O(log n)
    if(st.find(7) != st.end()) cout <<  "\nElement Found \n";
    else cout <<  "Element not Found \n";

    return 0;
}







*/
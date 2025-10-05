// Infix to Postfix
#include <bits/stdc++.h>
using namespace std;

int prec(char ch){
    if(ch=='+' || ch == '-') return 0;
    if(ch=='*' || ch == '/') return 1;
}

int main(){

    string s;
    cin >> s;

    stack<char> st;
    string ans="";
    for (int i = 0; i < s.size(); i++){
        char now = s[i];
        if (now>='a'  && now<='z'){
            ans +=now;
        }
        else{
            while (st.size() && prec(st.top())>= prec(now)){
                ans+= st.top();
                st.pop();
            }
            st.push(now);
        }
    }
    while (st.size()){
        ans+= st.top();
        st.pop(); 
    }
    
    cout << ans << endl;
    
    return 0;
}









/*

// Infix to Postfix
#include <bits/stdc++.h>
using namespace std;

int prec(char ch){
    if(ch=='+' || ch == '-') return 0;
    if(ch=='*' || ch == '/') return 1;
}

int main(){

    string s;
    cin >> s;

    stack<char> st;
    string ans="";
    for (int i = 0; i < s.size(); i++){
        char now = s[i];
        if (now>='a'  && now<='z'){
            ans +=now;
        }
        else{
            while (st.size() && prec(st.top())>= prec(now)){
                ans+= st.top();
                st.pop();
            }
            st.push(now);
        }
    }
    while (st.size()){
        ans+= st.top();
        st.pop(); 
    }
    
    cout << ans << endl;
    
    return 0;
}




// Bracket problem
#include <bits/stdc++.h>
using namespace std;



int main(){
   
   string str;
   cin >> str;

   stack <char> st;
   for(int i =0; i < str.size();i++){
        char now = str[i];
        if(now =='(' || now =='{' || now == '['){
            st.push(now);
        }
        else{
            if (st.empty()){
                cout << " No Data here\n";
                return 0;
            }
            if (now == ')' && st.top()=='('){
                st.pop();
            }
            else if (now == '}' && st.top()=='{'){
                st.pop();
            }
            else if (now == ']' && st.top()=='['){
                st.pop();
            }
            else{
                cout << "Invalid Breckets\n";
                return 0;
            }
            
        }
   }
   if(st.empty()){
    cout << "valid Breckets\n";
   }
    else{
        cout << "Invalid Breckets\n";
    }

    return 0;

}






//C++ Buildin Stack
#include <bits/stdc++.h>
using namespace std;



int main(){
   
   //BuildIn Stack
   stack<int> st;

   // Stack push
    st.push(456);
    st.push(34);
    st.push(45);
    st.push(567);
    cout<< st.top() << "\n";

    //Stack pop
    st.pop();
    cout<< st.top() << "\n";  
    st.pop();
    cout<< st.top() << "\n";  
    st.pop();
    cout<< st.top() << "\n";  
    st.pop();

    // Print Top element of sack
    cout<< st.top() << "\n"; 

    // Size
    cout<< st.size() << "\n";

    return 0;

}







//C++ Buildin linkedList
#include <bits/stdc++.h>
using namespace std;

//List print function
void printList(list<int> l){
    
    //list<int>::iterator a = l.begin();
    auto a = l.begin();
    while (a != l.end()){
        cout << *a << " ";
        a++;
    }
    cout << endl;
}
//List insert at any index function O(n)
void insertAtAnyIndex(list<int> &l, int index,int value){
    
   //list<int>::iterator it = l.begin();
    auto it = l.begin();
    advance(it,index);
    l.insert(it,value);
}

//delete at any position from the linkedlist
void deleteAtAnyIndex(list<int> &l, int index){
    
   //list<int>::iterator it = l.begin();
    auto it = l.begin();
    advance(it,index);
    l.erase(it);
    
}


int main(){
   

   list<int>l;
   //push/insert element in linkedList front O(1)
   l.push_front(23);
   l.push_front(5);
   l.push_front(234);
   l.push_front(67);
   printList(l);

   //push/insert element in linkedList back O(1)
   l.push_back(3);
   l.push_back(234);
   l.push_back(5);
   l.push_back(89);
   printList(l);

   //pop/delete element in linkedList front O(1)
   l.pop_front();
   printList(l);
   //pop/delete element in linkedList back O(1)
   l.pop_back();
   printList(l);

    //insert value in list
    insertAtAnyIndex(l,1,453635);
    printList(l);
    //Delete value in list
    deleteAtAnyIndex(l,1);
    printList(l);

    //size of list
    cout << l.size(); 
  

    return 0;

}






















*/
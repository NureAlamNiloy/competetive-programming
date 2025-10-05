#include <bits/stdc++.h>
using namespace std;

int main(){
    //for fast cin cout
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   int n,count=0;
   cin >> n;
   vector <int> arr;
   arr.resize(n);
   for (int i = 0; i < n; i++){
        cin >> arr[i];
   }
   sort(arr.begin(),arr.end());
   for (int i = 0; i < n; i++){
        if(i==0){
            count++;
            continue;
        }
        if(arr[i]!=arr[i-1]){
            count++;
        }
   }
    cout << count << "\n";
   
    return 0;
}






/*


// sorted class array
#include <bits/stdc++.h>
using namespace std;

class student{
private:
   
public:
string name;
    int age;
    int roll;
    student(){
        
    }
    student(string s, int ag, int r){
        name = s;
        age = ag;
        roll = r;
    }
    void printInfo(){
        cout << name << " "<< age << " " << roll << endl;
    }
};
bool comp(student n, student b){
    return n.age < b.age;
}

int main(){
    
    vector <student> a;
    for (int i = 0; i < 10; i++)
    {
        a.push_back(student("Niloy",20-i,581567+i));
        a[i].printInfo();
    }
    cout << "After shorting" << endl << endl;
    sort(a.begin(),a.end(),comp);
    for (int i = 0; i < 10; i++){
        a[i].printInfo();
    }
    

    return 0;
}




//Class array

#include <bits/stdc++.h>
using namespace std;

class student{
private:
   string name;
    int age;
    int roll;
public:
    student(){
        
    }
    student(string s, int ag, int r){
        name = s;
        age = ag;
        roll = r;
    }
    void printInfo(){
        cout << name << " "<< age << " " << roll << endl;
    }
   

};


int main(){
    
    student s[10];
    for (int i = 0; i < 10; i++)
    {
        s[i] = student("Niloy",20+i,581567+i);
        s[i].printInfo();
    }
    

    return 0;
}





// Class Object
#include <bits/stdc++.h>
using namespace std;

class student{//Studen info using Class
public:
    string name;
    int stdId;
    int age;
    int roll;
    string fatherName;
    string motherName;
    void printInfo(){
        cout << name << " " << stdId << " " << age << " " << roll << " " << fatherName << " " << motherName << endl;
    }
};

class ractengle{ // Math using class
    public:
    int hight,wight;
    int area(){
        return hight*wight;
    }
    int perimeter(){
        return 2*(hight+wight);
    }
};

class person{ // recursive or pointer class
public:
    string name;
    person *father,*mother;

    void printPersion(){
        cout << name << endl ;
        cout << father->name << endl ;
        cout << mother->name << endl ;
    }
    
};




int main(){

    // student s;
    // s.name = "Niloy";
    // s.stdId = 1234;
    // s.age = 20;
    // s.roll = 581567;
    // s.fatherName = "Tofayel Ahamed";
    // s.motherName = "Nilofa Akter";
    // s.printInfo();

    // ractengle r;
    // r.hight = 10;
    // r.wight = 20;
    // cout << r.area() << endl;
    // cout << r.perimeter() << endl;

    person p;
    p.father = new person;
    p.mother = new person;
    p.name = "Niloy";
    p.father->name = "Tofayel Ahamed";
    p.mother->name = "Nilofa Akter";
    p.printPersion();


    return 0;
}







*/
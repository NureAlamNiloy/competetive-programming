#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a,int b, int c, int d){
    int ans;
    if(a>b && a>c && a>d){
        ans = a;
    }
    
    else if(b>a && b>c && b>d){
        ans = b;
    }
    else if(c>b && c>a && c>d){
        ans = c;
    }
    else{
        ans = d;
    }
    return ans;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}